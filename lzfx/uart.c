
//-------------------------------------------------------------------
//-------------------------------------------------------------------

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );

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
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
