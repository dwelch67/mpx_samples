
//-------------------------------------------------------------------
//-------------------------------------------------------------------

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
extern void dummy ( unsigned int );

//-------------------------------------------------------------------
//-------------------------------------------------------------------
void uart_putc ( unsigned char x )
{
    while(0x20000004 & (1<<3)) continue;
    PUT32(0x20000008,x);
}
//-------------------------------------------------------------------
void uart_init(void)
{
}
//-------------------------------------------------------------------
void uart_fifo_flush ( void )
{
}
//-------------------------------------------------------------------------
void hexstrings ( unsigned int d )
{
    unsigned int rb;
    unsigned int rc;

    rb=32;
    while(1)
    {
        rb-=4;
        rc=(d>>rb)&0xF;
        if(rc>9) rc+=0x37; else rc+=0x30;
        uart_putc(rc);
        if(rb==0) break;
    }
    uart_putc(0x20);
}
//-------------------------------------------------------------------------
void hexstring ( unsigned int d )
{
    hexstrings(d);
    uart_putc(0x0D);
    uart_putc(0x0A);
}
//-------------------------------------------------------------------
//-------------------------------------------------------------------


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
//-------------------------------------------------------------------------
int run_crc_test ( void )
{
    unsigned int ra;
    unsigned int crc;
    unsigned short maketable[256];
    unsigned char somedata[64];

    make_crc_table(maketable);
    crc=0;
    for(ra=0;ra<256;ra++)
    {
        crc+=maketable[ra];
        dummy(crc); //prevent compile time optimization
    }
    hexstring(crc);
    if(crc!=0x007FFF80)
    {
        hexstring(0xBAD);
        return(1);
    }
    for(ra=0;ra<64;ra++) somedata[ra]=ra;
    crc=0xFFFF;
    for(ra=0;ra<60;ra++)
    {
        crc=(crc>>8)^maketable[(crc^somedata[ra])&0xFF];
        dummy(crc);
    }
    hexstring(crc);
    if(crc!=0x00000B46)
    {
        hexstring(0xBAD);
        return(1);
    }
    somedata[ra++]=(crc>>0)&0xFF;
    somedata[ra++]=(crc>>8)&0xFF;
    crc=0xFFFF;
    for(ra=0;ra<62;ra++)
    {
        crc=(crc>>8)^maketable[(crc^somedata[ra])&0xFF];
        dummy(crc);
    }
    hexstring(crc);
    if(crc!=0x00000000)
    {
        hexstring(0xBAD);
        return(1);
    }
    return(0);
}
//-------------------------------------------------------------------------
int notmain ( void )
{
    //unsigned int beg,end;

    uart_init();
    hexstring(0x12340000);

    //beg=GET32(0xD1000000);
    run_crc_test();
    //end=GET32(0xD1000000);
    //hexstring(end-beg);

    hexstring(0x12345678);
    return(0);
}
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
