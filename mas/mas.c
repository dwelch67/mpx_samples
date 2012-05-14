
//-------------------------------------------------------------------
// Copyright (C) 2012 David Welch
//-------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *fpin;
FILE *fpout;

unsigned int rd,rs,rt,rx;
unsigned int is_const,is_label;

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
            if(newline[ra]=='(') break;
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
            if(newline[ra]=='(') break;
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
        if(newline[ra]=='(') break;
        if(newline[ra]==')') break;
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
unsigned int parse_par_open ( unsigned int ra )
{
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    if(newline[ra]!='(')
    {
        printf("<%u> Error: syntax error\n",line);
        return(0);
    }
    ra++;
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_par_close ( unsigned int ra )
{
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    if(newline[ra]!=')')
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
unsigned int parse_three_shift ( unsigned int ra )
{
    ra=parse_reg(ra); if(ra==0) return(0);
    rd=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_reg(ra); if(ra==0) return(0);
    rt=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_reg(ra); if(ra==0) return(0);
    rs=rx;
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
unsigned int parse_two_shift ( unsigned int ra )
{
    ra=parse_reg(ra); if(ra==0) return(0);
    rd=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_reg(ra); if(ra==0) return(0);
    rt=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_immed(ra); if(ra==0) return(0);
    rs=rx;
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_branch_label ( unsigned int ra )
{
    unsigned int rb;
    unsigned int rc;

    is_const=0;
    is_label=0;
    for(;newline[ra];ra++) if(newline[ra]!=0x20) break;
    if(numchar[newline[ra]])
    {
        ra=parse_immed(ra); if(ra==0) return(0);
        is_const=1;
    }
    else
    {
        //assume label, find space or eol.
        for(rb=ra;newline[rb];rb++)
        {
            if(newline[rb]==0x20) break; //no spaces in labels
        }
        //got a label
        rc=rb-ra;
        if(rc==0)
        {
            printf("<%u> Error: Invalid label\n",line);
            return(0);
        }
        rc--;
        if(rc>=LABLEN)
        {
            printf("<%u> Error: Label too long\n",line);
            return(0);
        }
        for(rb=0;rb<=rc;rb++)
        {
            lab_struct[nlabs].name[rb]=newline[ra++];
        }
        lab_struct[nlabs].name[rb]=0;
        lab_struct[nlabs].addr=curradd;
        lab_struct[nlabs].line=line;
        lab_struct[nlabs].type=1;
        nlabs++;
        rx=0;
        is_label=1;
    }
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_two_label ( unsigned int ra )
{
    ra=parse_reg(ra); if(ra==0) return(0);
    rt=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_reg(ra); if(ra==0) return(0);
    rs=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_branch_label(ra); if(ra==0) return(0);
    rd=rx;
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_one_label ( unsigned int ra )
{
    ra=parse_reg(ra); if(ra==0) return(0);
    rs=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_branch_label(ra); if(ra==0) return(0);
    rd=rx;
    return(ra);
}
//-------------------------------------------------------------------
unsigned int parse_load_store ( unsigned int ra )
{
    ra=parse_reg(ra); if(ra==0) return(0);
    rt=rx;
    ra=parse_comma(ra); if(ra==0) return(0);
    ra=parse_branch_label(ra); if(ra==0) return(0);
    rd=rx;
    if(is_const)
    {
        ra=parse_par_open(ra); if(ra==0) return(0);
        ra=parse_reg(ra); if(ra==0) return(0);
        rs=rx;
        ra=parse_par_close(ra); if(ra==0) return(0);
    }
    return(ra);
}
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
            lab_struct[nlabs].addr=0x2000+(curradd<<2);
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
        if(strncmp(&newline[ra],".word ",6)==0)
        {
            ra+=6;
            ra=parse_immed(ra); if(ra==0) return(1);
            mem[curradd]=rx;
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
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
// beq -----------------------------------------------------------
        if(strncmp(&newline[ra],"beq ",4)==0)
        {
            ra+=4;
            //beq $t,$s,offset/label
            ra=parse_two_label(ra); if(ra==0) return(1);
            //            0001 00ss
            mem[curradd]=(0x04<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// bgez -----------------------------------------------------------
        if(strncmp(&newline[ra],"bgez ",5)==0)
        {
            ra+=5;
            //bgez $s,offset/label
            ra=parse_one_label(ra); if(ra==0) return(1);
            //            0000 01ss
            mem[curradd]=(0x01<<26)|(rs<<21)|(0x01<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// bgezal -----------------------------------------------------------
        if(strncmp(&newline[ra],"bgezal ",7)==0)
        {
            ra+=7;
            //bgezal $s,offset/label
            ra=parse_one_label(ra); if(ra==0) return(1);
            //            0000 01ss
            mem[curradd]=(0x01<<26)|(rs<<21)|(0x11<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// bgtz -----------------------------------------------------------
        if(strncmp(&newline[ra],"bgtz ",5)==0)
        {
            ra+=5;
            //bgtz $s,offset/label
            ra=parse_one_label(ra); if(ra==0) return(1);
            //            0001 11ss
            mem[curradd]=(0x7<<26)|(rs<<21)|(0x00<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// blez -----------------------------------------------------------
        if(strncmp(&newline[ra],"blez ",5)==0)
        {
            ra+=5;
            //blez $s,offset/label
            ra=parse_one_label(ra); if(ra==0) return(1);
            //            0001 10ss
            mem[curradd]=(0x6<<26)|(rs<<21)|(0x00<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// bltz -----------------------------------------------------------
        if(strncmp(&newline[ra],"bltz ",5)==0)
        {
            ra+=5;
            //bltz $s,offset/label
            ra=parse_one_label(ra); if(ra==0) return(1);
            //            0000 01ss
            mem[curradd]=(0x01<<26)|(rs<<21)|(0x00<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// bltzal -----------------------------------------------------------
        if(strncmp(&newline[ra],"bltzal ",7)==0)
        {
            ra+=7;
            //bltzal $s,offset/label
            ra=parse_one_label(ra); if(ra==0) return(1);
            //            0000 01ss
            mem[curradd]=(0x01<<26)|(rs<<21)|(0x10<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// bne -----------------------------------------------------------
        if(strncmp(&newline[ra],"bne ",4)==0)
        {
            ra+=4;
            //bne $t,$s,offset/label
            ra=parse_two_label(ra); if(ra==0) return(1);
            //            0001 01ss
            mem[curradd]=(0x5<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// div -----------------------------------------------------------
        if(strncmp(&newline[ra],"div ",4)==0)
        {
            printf("div/mult/mfhi/mflo not supported\n");
        }
// divu -----------------------------------------------------------
        if(strncmp(&newline[ra],"divu ",5)==0)
        {
            printf("div/mult/mfhi/mflo not supported\n");
        }
// j -----------------------------------------------------------
        if(strncmp(&newline[ra],"j ",2)==0)
        {
            ra+=2;
            //j label
            //j 0x1234
            //j 123
            ra=parse_branch_label(ra); if(ra==0) return(1);
            rt=rx&0x0FFFFFFC;
            if(rt!=rx)
            {
                printf("<%u> Error: warning constant too big\n",line);
                return(1);
            }
            //            0000 10tt
            mem[curradd]=(0x02<<26)|(rt>>2);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// jal -----------------------------------------------------------
        if(strncmp(&newline[ra],"jal ",2)==0)
        {
            ra+=2;
            //jal label
            //jal 0x1234
            //jal 123
            ra=parse_branch_label(ra); if(ra==0) return(1);
            rt=rx&0x0FFFFFFC;
            if(rt!=rx)
            {
                printf("<%u> Error: warning constant too big\n",line);
                return(1);
            }
            //            0000 11tt
            mem[curradd]=(0x03<<26)|(rt>>2);
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
            //            001111-----
            mem[curradd]=(0x0F<<26)|(rt<<16)|(rx&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// lw -----------------------------------------------------------
        if(strncmp(&newline[ra],"lw ",3)==0)
        {
            ra+=3;
            //l2 $t,label
            //lw $t,offset($s)
            ra=parse_load_store(ra); if(ra==0) return(1);
            if(rest_of_line(ra)) return(1);
            if(is_label)
            {
                printf("<%u> adding instruction\n",line);
                //            0011 11tt
                mem[curradd]=(0x0F<<26)|(rt<<16)|(0x0000);
                mark[curradd]|=0x80000000;
                curradd++;
                //            1000 11ss
                mem[curradd]=(0x23<<26)|(rt<<21)|(rt<<16)|(0x0000);
                mark[curradd]|=0x80000000;
                curradd++;
                continue;
            }
            if(is_const)
            {
                //            1000 11ss
                mem[curradd]=(0x23<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
                mark[curradd]|=0x80000000;
                curradd++;
                continue;
            }
        }
// mfhi -----------------------------------------------------------
        if(strncmp(&newline[ra],"mfhi ",5)==0)
        {
            printf("div/mult/mfhi/mflo not supported\n");
        }
// mflo -----------------------------------------------------------
        if(strncmp(&newline[ra],"mflo ",5)==0)
        {
            printf("div/mult/mfhi/mflo not supported\n");
        }
// mult -----------------------------------------------------------
        if(strncmp(&newline[ra],"mult ",5)==0)
        {
            printf("div/mult/mfhi/mflo not supported\n");
        }
// multu -----------------------------------------------------------
        if(strncmp(&newline[ra],"multu ",6)==0)
        {
            printf("div/mult/mfhi/mflo not supported\n");
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
// sll -----------------------------------------------------------
        if(strncmp(&newline[ra],"sll ",4)==0)
        {
            ra+=4;
            //sll $d,$t,shamt
            ra=parse_two_shift(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(0<<21)|(rt<<16)|(rd<<11)|((rs&0x1F)<<6)|(0x00);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// sllv -----------------------------------------------------------
        if(strncmp(&newline[ra],"sllv ",5)==0)
        {
            ra+=5;
            //sllv $d,$t,$s
            ra=parse_three_shift(ra); if(ra==0) return(1);
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
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x02B);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// sra -----------------------------------------------------------
        if(strncmp(&newline[ra],"sra ",4)==0)
        {
            ra+=4;
            //sra $d,$t,shamt
            ra=parse_two_shift(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(0<<21)|(rt<<16)|(rd<<11)|((rs&0x1F)<<6)|(0x03);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// srav -----------------------------------------------------------
        if(strncmp(&newline[ra],"srav ",5)==0)
        {
            ra+=5;
            //srav $d,$t,$s
            ra=parse_three_shift(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(rs<<21)|(rt<<16)|(rd<<11)|(0x00<<6)|(0x07);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// srl -----------------------------------------------------------
        if(strncmp(&newline[ra],"srl ",4)==0)
        {
            ra+=4;
            //srl $d,$t,shamt
            ra=parse_two_shift(ra); if(ra==0) return(1);
            mem[curradd]=(0x00<<26)|(0<<21)|(rt<<16)|(rd<<11)|((rs&0x1F)<<6)|(0x02);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// srlv -----------------------------------------------------------
        if(strncmp(&newline[ra],"srlv ",5)==0)
        {
            ra+=5;
            //srlv $d,$t,$s
            ra=parse_three_shift(ra); if(ra==0) return(1);
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
// sw -----------------------------------------------------------
        if(strncmp(&newline[ra],"sw ",3)==0)
        {
            ra+=3;
            //sw $t,label
            //sw $t,offset($s)
            ra=parse_load_store(ra); if(ra==0) return(1);
            if(rest_of_line(ra)) return(1);
            if(is_label)
            {
                printf("<%u> adding instruction\n",line);
                //            0011 11ss
                mem[curradd]=(0x0F<<26)|(rt<<16)|(0x0000);
                mark[curradd]|=0x80000000;
                curradd++;
                //            1010 11ss
                mem[curradd]=(0x2B<<26)|(rt<<21)|(rt<<16)|(0x0000);
                mark[curradd]|=0x80000000;
                curradd++;
                continue;
            }
            if(is_const)
            {
                //            1010 11ss
                mem[curradd]=(0x2B<<26)|(rs<<21)|(rt<<16)|(rd&0xFFFF);
                mark[curradd]|=0x80000000;
                curradd++;
                continue;
            }
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
//-------------------------------------------------------------------
// pseudo instructions
//-------------------------------------------------------------------
// b -----------------------------------------------------------
        if(strncmp(&newline[ra],"b ",2)==0)
        {
            ra+=2;
            //b label
            //b 0x1234
            //b 123
            printf("<%u> b label, is an alias for beq $0,$0,label\n",line);
            ra=parse_branch_label(ra); if(ra==0) return(1);
            //            0001 00ss beq
            mem[curradd]=(0x04<<26)|(0<<21)|(0<<16)|(rx&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// bal -----------------------------------------------------------
        if(strncmp(&newline[ra],"bal ",4)==0)
        {
            ra+=4;
            //bal label
            //bal 0x1234
            //bal 123
            printf("<%u> bal label, is an alias for bgezal $0,label\n",line);
            ra=parse_branch_label(ra); if(ra==0) return(1);
            //            0000 01ss bgezal
            mem[curradd]=(0x01<<26)|(0<<21)|(0x11<<16)|(rx&0xFFFF);
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// la -----------------------------------------------------------
        if(strncmp(&newline[ra],"la ",3)==0)
        {
            ra+=3;
            //la $t,label
            ra=parse_reg(ra); if(ra==0) return(1);
            rt=rx;
            ra=parse_comma(ra); if(ra==0) return(0);
            ra=parse_branch_label(ra); if(ra==0) return(1);
            if(rest_of_line(ra)) return(1);
            if(is_label)
            {
                printf("<%u> la $t,label is an alias for lui $t,address[31:16]; ori $t,$t,address[15:0]\n",line);
                printf("<%u> adding an instruction\n",line);
                //           0011 11ss
                mem[curradd]=(0x0F<<26)|(0<<21)|(rt<<16)|((rx>>16)&0xFFFF);
                mark[curradd]|=0x80000000;
                curradd++;
                //           0011 01ss
                mem[curradd]=(0x0D<<26)|(rt<<21)|(rt<<16)|(rx&0xFFFF);
                mark[curradd]|=0x80000000;
                curradd++;
                continue;
            }
        }
// li -----------------------------------------------------------
        if(strncmp(&newline[ra],"li ",3)==0)
        {
            ra+=3;
            //li $t,imm
            ra=parse_reg(ra); if(ra==0) return(1);
            rt=rx;
            ra=parse_comma(ra); if(ra==0) return(0);
            ra=parse_immed(ra); if(ra==0) return(1);
            if(rx&0xFFFF0000)
            {
                printf("<%u> li $t,imm is an alias for lui $t,imm[31:16]; ori $t,$t,imm[15:0]\n",line);
                printf("<%u> adding an instruction\n",line);
                //           0011 11ss
                mem[curradd]=(0x0F<<26)|(0<<21)|(rt<<16)|((rx>>16)&0xFFFF);
                mark[curradd]|=0x80000000;
                curradd++;
                //           0011 01ss
                mem[curradd]=(0x0D<<26)|(rt<<21)|(rt<<16)|(rx&0xFFFF);
                mark[curradd]|=0x80000000;
                curradd++;
            }
            else
            {
                printf("<%u> li $t,imm is an alias for ori $t,$0,imm[15:0]\n",line);
                //           0011 01ss
                mem[curradd]=(0x0D<<26)|(0<<21)|(rt<<16)|(rx&0xFFFF);
                mark[curradd]|=0x80000000;
                curradd++;
            }
            if(rest_of_line(ra)) return(1);
            continue;
        }
// noop -----------------------------------------------------------
        if(strncmp(&newline[ra],"noop",4)==0)
        {
            ra+=4;
            //noop
            //printf("<%u> noop is a pseudo instruction for sll $0,$0,0\n",line);
            mem[curradd]=0x00000000;
            mark[curradd]|=0x80000000;
            curradd++;
            if(rest_of_line(ra)) return(1);
            continue;
        }
// nop -----------------------------------------------------------
        if(strncmp(&newline[ra],"nop",3)==0)
        {
            ra+=3;
            //nop
            //printf("<%u> nop is a pseudo instruction for sll $0,$0,0\n",line);
            mem[curradd]=0x00000000;
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
    unsigned int inst;
    unsigned int inst2;

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

    for(ra=0;ra<nlabs;ra++)
    {
        printf("label%04u: [0x%08X] [%s] %u\n",ra,lab_struct[ra].addr,lab_struct[ra].name,lab_struct[ra].type);

        if(lab_struct[ra].type)
        {
            for(rb=0;rb<nlabs;rb++)
            {
                if(lab_struct[rb].type) continue;
                if(strcmp(lab_struct[ra].name,lab_struct[rb].name)==0)
                {
                    rx=lab_struct[rb].addr;
                    inst=mem[lab_struct[ra].addr];
                    if((inst&0xFC000000)==0x10000000)
                    {
                        //beq $s,$t,label
                        rs=0x2000+(lab_struct[ra].addr<<2);
                        rd=rx-(rs+4);
                        inst|=(rd>>2)&0x0000FFFF;
                        lab_struct[ra].type++;
                    }
                    switch(inst&0xFC1F0000)
                    {
                        case 0x04010000: //bgez $s,label
                        case 0x04110000: //bgezal $s,label
                        case 0x1C000000: //bgtz $s,label
                        case 0x18000000: //blez $s,label
                        case 0x04000000: //bltz $s,label
                        case 0x04100000: //bltzal $s,label
                        {
                            rs=0x2000+(lab_struct[ra].addr<<2);
                            rd=rx-(rs+4);
                            inst|=(rd>>2)&0x0000FFFF;
                            lab_struct[ra].type++;
                            break;
                        }
                    }
                    if((inst&0xFC000000)==0x14000000)
                    {
                        //bne $s,$t,label
                        rs=0x2000+(lab_struct[ra].addr<<2);
                        rd=rx-(rs+4);
                        inst|=(rd>>2)&0x0000FFFF;
                        lab_struct[ra].type++;
                    }
                    if((inst&0xFC000000)==0x08000000)
                    {
                        //j label
                        inst|=(rx>>2)&0x03FFFFFF;
                        lab_struct[ra].type++;
                    }
                    if((inst&0xFC000000)==0x0C000000)
                    {
                        //jal label
                        inst|=(rx>>2)&0x03FFFFFF;
                        lab_struct[ra].type++;
                    }

                    if((inst&0xFC000000)==0x3C000000)
                    {
                        inst2=mem[lab_struct[ra].addr+1];
                        if((inst2&0xFC000000)==0x8C000000)
                        {
                            //lui + lw
                            inst|=(rx>>16)&0xFFFF;
                            inst2|=(rx>>0)&0xFFFF;
                            mem[lab_struct[ra].addr+1]=inst2;
                            lab_struct[ra].type++;
                        }
                        if((inst2&0xFC000000)==0xAC000000)
                        {
                            //lui + sw
                            inst|=(rx>>16)&0xFFFF;
                            inst2|=(rx>>0)&0xFFFF;
                            mem[lab_struct[ra].addr+1]=inst2;
                            lab_struct[ra].type++;
                        }
                        if((inst2&0xFC000000)==0x34000000)
                        {
                            //lui + ori
                            inst|=(rx>>16)&0xFFFF;
                            inst2|=(rx>>0)&0xFFFF;
                            mem[lab_struct[ra].addr+1]=inst2;
                            lab_struct[ra].type++;
                        }
                    }


                    if(lab_struct[ra].type==1)
                    {
                        printf("<%u> Error: internal error, unknown instruction 0x%08X\n",lab_struct[ra].line,inst);
                        return(1);
                    }
                    mem[lab_struct[ra].addr]=inst;
                    break;
                }
            }
            if(rb<nlabs) ; else
            {
                printf("<%u> Error: unresolved label\n",lab_struct[ra].line);
                return(1);
            }
        }
    }

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


