
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dummy ( unsigned int x )
{
}
void hexstring ( unsigned int x )
{
    printf("%08X\n",x);
}

void make_crc_table ( unsigned short *table )
{
    unsigned int ra,rb,rc;

    for(ra=0;ra<256;ra++)
    {
        rc = ra;
        for(rb=0;rb<8;rb++)
        {
            if(rc&1)
            {
                rc = 0x8408 ^ (rc >> 1);
            }
            else
            {
                rc = rc >> 1;
            }
        }
        dummy(rc); //prevent compile time optimization
        table[ra]=rc&0xFFFF;
    }
}

int main ( void )
{
    unsigned int ra;
    unsigned int crc;
    unsigned short maketable[256];
    unsigned char somedata[64];

    make_crc_table(maketable);
    //for(ra=0;ra<256;ra++)
    //{
        //if((ra&7)==0) printf("\n");
        //printf("0x%04X,",maketable[ra]);
    //}
    //printf("\n");
    crc=0;
    for(ra=0;ra<256;ra++)
    {
        crc+=maketable[ra];
        dummy(crc); //prevent compile time optimization
    }
    hexstring(crc);

    for(ra=0;ra<64;ra++) somedata[ra]=ra;

    crc=0xFFFF;
    for(ra=0;ra<60;ra++)
    {
        crc=(crc>>8)^maketable[(crc^somedata[ra])&0xFF];
        dummy(crc);
    }
    hexstring(crc);
    somedata[ra++]=(crc>>0)&0xFF;
    somedata[ra++]=(crc>>8)&0xFF;
    crc=0xFFFF;
    for(ra=0;ra<62;ra++)
    {
        crc=(crc>>8)^maketable[(crc^somedata[ra])&0xFF];
        dummy(crc);
    }
    hexstring(crc);
    return(0);
}

