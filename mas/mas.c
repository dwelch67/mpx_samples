
//-------------------------------------------------------------------
// Copyright (C) 2012 David Welch
//-------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *fpin;
FILE *fpout;

unsigned int rd,rs,rt,rx;

#define ADDMASK 0xFFFF
unsigned int mem[ADDMASK+1];
unsigned int mark[ADDMASK+1];

unsigned int curradd;
unsigned int line;

char cstring[1024];
char newline[1024];


#define LABLEN 64

#define MAX_LABS 65536
struct
{
    char name[LABLEN];
    unsigned int addr;
    unsigned int line;
    unsigned int type;
} lab_struct[MAX_LABS];
unsigned int nlabs;
unsigned int lab;


#define NREGNAMES (32)
struct
{
    char name[4];
    unsigned char num;
} reg_names[NREGNAMES]=
{
    {"$0",0},{"$1",1},{"$2",2},{"$3",3},{"$4",4},{"$5",5},{"$6",6},{"$7",7},
    {"$8",8},{"$9",9},{"$10",10},{"$11",11},{"$12",12},{"$13",13},{"$14",14},{"$15",15},
    {"$16",16},{"$17",17},{"$18",18},{"$19",19},{"$20",20},{"$21",21},{"$22",22},{"$23",23},
    {"$24",24},{"$25",25},{"$26",26},{"$27",27},{"$28",28},{"$29",29},{"$30",30},{"$31",31}
};



unsigned char hexchar[256]=
{
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

unsigned char numchar[256]=
{
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

//-------------------------------------------------------------------
//-------------------------------------------------------------------
//-------------------------------------------------------------------
int rest_of_line ( unsigned int ra )
{
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    if(newline[ra])
    {
        printf("<%u> Error: garbage at end of line\n",line);
        return(1);
    }
    return(0);
}
//-------------------------------------------------------------------
int get_reg_number ( char *s, unsigned int *rx )
{
    unsigned int ra;

    for(ra=0;ra<NREGNAMES;ra++)
    {
        if(strcmp(s,reg_names[ra].name)==0)
        {
            *rx=reg_names[ra].num;
            return(0);
        }
    }
    return(1);
}
//-------------------------------------------------------------------
unsigned int parse_immed ( unsigned int ra )
{
    unsigned int rb;

    if((newline[ra]==0x30)&&((newline[ra+1]=='x')||(newline[ra+1]=='X')))
    {
        ra+=2;
        rb=0;
        for(;newline[ra];ra++)
        {
            if(newline[ra]==0x20) break;
            if(!hexchar[newline[ra]])
            {
                printf("<%u> Error: invalid number\n",line);
                return(0);
            }
            cstring[rb++]=newline[ra];
        }
        cstring[rb]=0;
        if(rb==0)
        {
            printf("<%u> Error: invalid number\n",line);
            return(0);
        }
        rx=strtoul(cstring,NULL,16);
    }
    else
    {
        rb=0;
        for(;newline[ra];ra++)
        {
            if(newline[ra]==0x20) break;
            if(!numchar[newline[ra]])
            {
                printf("<%u> Error: invalid number\n",line);
                return(0);
            }
            cstring[rb++]=newline[ra];
        }
        cstring[rb]=0;
        if(rb==0)
        {
            printf("<%u> Error: invalid number\n",line);
            return(0);
        }
        rx=strtoul(cstring,NULL,10);
    }
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;

    if(rx&0x8000)
    {
        if((rx&0xFFFF0000)!=0xFFFF0000)
        {
            printf("<%u> Error: immed too big\n",line);
            return(0);
        }
    }
    else
    {
        if((rx&0xFFFF0000)!=0x00000000)
        {
            printf("<%u> Error: immed too big\n",line);
            return(0);
        }
    }
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_reg ( unsigned int ra )
{
    unsigned int rb;

    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    rb=0;
    for(;newline[ra];ra++)
    {
        if(newline[ra]==',') break;
        if(newline[ra]==0x20) break;
        cstring[rb++]=newline[ra];
    }
    cstring[rb]=0;
    if(get_reg_number(cstring,&rx))
    {
        printf("<%u> Error: not a register\n",line);
        return(0);
    }
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_comma ( unsigned int ra )
{
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    if(newline[ra]!=',')
    {
        printf("<%u> Error: syntax error\n",line);
        return(0);
    }
    ra++;
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_three_regs ( unsigned int ra )
{
    ra=parse_reg(ra); if(ra==0) return(0);
    rd=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_reg(ra); if(ra==0) return(0);
    rs=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_reg(ra); if(ra==0) return(0);
    rt=rx;
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_two_immed ( unsigned int ra )
{
    ra=parse_reg(ra); if(ra==0) return(0);
    rt=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_reg(ra); if(ra==0) return(0);
    rs=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_immed(ra); if(ra==0) return(0);
    rd=rx;
    return(ra);
}
//-------------------------------------------------------------------
//-------------------------------------------------------------------
//-------------------------------------------------------------------
int assemble ( void )
{
    unsigned int ra;
    unsigned int rb;
    unsigned int rc;


    curradd=0;
    nlabs=0;
    memset(mem,0x00,sizeof(mem));
    memset(mark,0x00,sizeof(mark));

    line=0;
    while(fgets(newline,sizeof(newline)-1,fpin))
    {
        line++;
        //tabs to spaces and other things
        for(ra=0;newline[ra];ra++)
        {
            if(newline[ra]<0x20)  newline[ra]=0x20;
            if(newline[ra]>=0x7F) newline[ra]=0;
        }

        //various ways to comment lines
        for(ra=0;newline[ra];ra++)
        {
            if(newline[ra]==';') newline[ra]=0;
            if(newline[ra]=='@') newline[ra]=0;
            if((newline[ra]=='/')&&(newline[ra+1]=='/')) newline[ra]=0;
            if(newline[ra]==0) break;
        }

        //skip spaces
        for(ra=0;newline[ra];ra++) if(newline[ra]!=0x20) break;
        if(newline[ra]==0) continue;

        //look for a label?
        for(rb=ra;newline[rb];rb++)
        {
            if(newline[rb]==0x20) break; //no spaces in labels
            if(newline[rb]==':') break;
        }
        if(newline[rb]==':')
        {
            //got a label
            rc=rb-ra;
            if(rc==0)
            {
                printf("<%u> Error: Invalid label\n",line);
                return(1);
            }
            rc--;
            if(rc>=LABLEN)
            {
                printf("<%u> Error: Label too long\n",line);
                return(1);
            }
            for(rb=0;rb<=rc;rb++)
            {
                lab_struct[nlabs].name[rb]=newline[ra++];
            }
            lab_struct[nlabs].name[rb]=0;
            lab_struct[nlabs].addr=curradd;
            lab_struct[nlabs].line=line;
            lab_struct[nlabs].type=0;
            ra++;
            for(lab=0;lab<nlabs;lab++)
            {
                if(lab_struct[lab].type) continue;
                if(strcmp(lab_struct[lab].name,lab_struct[nlabs].name)==0) break;
            }
            if(lab<nlabs)
            {
                printf("<%u> Error: label [%s] already defined on line %u\n",line,lab_struct[lab].name,lab_struct[lab].line);
                return(1);
            }
            nlabs++;
            //skip spaces
            for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
            if(newline[ra]==0) continue;
        }
// .word -----------------------------------------------------------
        //if(strncmp(&newline[ra],".word ",6)==0)
        //{
        //}


// add -----------------------------------------------------------
        if(strncmp(&newline[ra],"add ",4)==0)
        {
            ra+=4;
            //add $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x20);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// addi -----------------------------------------------------------
        if(strncmp(&newline[ra],"addi ",5)==0)
        {
            ra+=5;
            //addi $t,$s,imm
            ra=parse_two_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x08<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// addiu -----------------------------------------------------------
        if(strncmp(&newline[ra],"addiu ",6)==0)
        {
            ra+=6;
            //addiu $t,$s,imm
            ra=parse_two_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x09<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// addu -----------------------------------------------------------
        if(strncmp(&newline[ra],"addu ",5)==0)
        {
            ra+=5;
            //addu $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x21);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// and -----------------------------------------------------------
        if(strncmp(&newline[ra],"and ",4)==0)
        {
            ra+=4;
            //and $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x24);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// andi -----------------------------------------------------------
        if(strncmp(&newline[ra],"andi ",5)==0)
        {
            ra+=5;
            //andi $t,$s,imm
            ra=parse_two_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x0C<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// jr -----------------------------------------------------------
        if(strncmp(&newline[ra],"jr ",3)==0)
        {
            ra+=3;
            //jr $s
            ra=parse_reg(ra); if(ra==0) return(1);
            rs=rx;
            mem[curradd]=(0x00<<26)|(rs<<21)|(0x08);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// lui -----------------------------------------------------------
        if(strncmp(&newline[ra],"lui ",4)==0)
        {
            ra+=4;
            //lui $t,imm
            ra=parse_reg(ra); if(ra==0) return(1);
            rt=rx;
            ra=parse_comma(ra); if(ra==0) return(0);
            ra=parse_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x0F<<26)|(rt<<16)|(rx&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// noop -----------------------------------------------------------
        if(strncmp(&newline[ra],"noop",4)==0)
        {
            ra+=4;
            //noop
            mem[curradd]=0x00000000;
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// or -----------------------------------------------------------
        if(strncmp(&newline[ra],"or ",3)==0)
        {
            ra+=3;
            //or $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x25);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// ori -----------------------------------------------------------
        if(strncmp(&newline[ra],"ori ",4)==0)
        {
            ra+=4;
            //ori $t,$s,imm
            ra=parse_two_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x0D<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// sllv -----------------------------------------------------------
        if(strncmp(&newline[ra],"sllv ",5)==0)
        {
            ra+=5;
            //sllv $d,$s,$t  actually $d,$t,$s
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x04);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// slt -----------------------------------------------------------
        if(strncmp(&newline[ra],"slt ",4)==0)
        {
            ra+=4;
            //slt $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x2A);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// slti -----------------------------------------------------------
        if(strncmp(&newline[ra],"slti ",5)==0)
        {
            ra+=5;
            //slti $t,$s,imm
            ra=parse_two_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x0A<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// sltiu -----------------------------------------------------------
        if(strncmp(&newline[ra],"sltiu ",6)==0)
        {
            ra+=6;
            //sltiu $t,$s,imm
            ra=parse_two_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x0B<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// sltu -----------------------------------------------------------
        if(strncmp(&newline[ra],"sltu ",5)==0)
        {
            ra+=5;
            //sltu $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x2B);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// srlv -----------------------------------------------------------
        if(strncmp(&newline[ra],"srlv ",5)==0)
        {
            ra+=5;
            //srlv $d,$s,$t actually $d,$t,$s
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x06);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// sub -----------------------------------------------------------
        if(strncmp(&newline[ra],"sub ",4)==0)
        {
            ra+=4;
            //sub $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x22);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// subu -----------------------------------------------------------
        if(strncmp(&newline[ra],"subu ",5)==0)
        {
            ra+=5;
            //subu $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x23);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// xor -----------------------------------------------------------
        if(strncmp(&newline[ra],"xor ",4)==0)
        {
            ra+=4;
            //xor $d,$s,$t
            ra=parse_three_regs(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x26);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// xori -----------------------------------------------------------
        if(strncmp(&newline[ra],"xori ",5)==0)
        {
            ra+=5;
            //xori $t,$s,imm
            ra=parse_two_immed(ra); if(ra==0) return(1);
            mem[curradd]=(0x0E<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }





// -----------------------------------------------------------
        printf("<%u> Error: syntax error\n",line);
        return(1);
    }
    return(0);
}
//-------------------------------------------------------------------
int main ( int argc, char *argv[] )
{
    int ret;
    unsigned int ra;
    unsigned int rb;

    if(argc!=2)
    {
        printf("mas filename\n");
        return(1);
    }

    fpin=fopen(argv[1],"rt");
    if(fpin==NULL)
    {
        printf("Error opening file [%s]\n",argv[1]);
        return(1);
    }
    ret=assemble();
    fclose(fpin);
    if(ret) return(1);


    sprintf(newline,"%s.hex",argv[1]);
    fpout=fopen(newline,"wt");
    if(fpout==NULL)
    {
        printf("Error creating file [%s]\n",newline);
        return(1);
    }



    for(ra=0;ra<=ADDMASK;ra++)
    {
        curradd=0x2000+(ra<<2);
        if(mark[ra]&0x80000000)
        {
            printf("0x%08X: 0x%08X\n",curradd,mem[ra]);

            rb=0x04;
            rb+=(curradd>>8)&0xFF;
            rb+=(curradd>>0)&0xFF;
            rb+=0x00;
            rb+=(mem[ra]>>24)&0xFF;
            rb+=(mem[ra]>>16)&0xFF;
            rb+=(mem[ra]>> 8)&0xFF;
            rb+=(mem[ra]>> 0)&0xFF;
            rb=(-rb)&0xFF;
            fprintf(fpout,":%02X%04X%02X%08X%02X\n",0x04,curradd&0xFFFF,0x00,mem[ra],rb);
        }
    }

    fclose(fpout);


    return(0);
}
//-------------------------------------------------------------------
//-------------------------------------------------------------------
//-------------------------------------------------------------------


