#ifndef __MPX_TOP_H__
#define __MPX_TOP_H__

//--------------------------------------------------------------------
// Defines
//--------------------------------------------------------------------
#define			MPX_RUN_RES_FAULT			-1
#define			MPX_RUN_RES_OK				0
#define			MPX_RUN_RES_MAX_CYCLES		1
#define			MPX_RUN_RES_BREAKPOINT		2

//--------------------------------------------------------------------
// Prototypes
//--------------------------------------------------------------------
int				mpx_test_init(void);
int				mpx_test_load(unsigned int addr, unsigned char val);
void			mpx_test_reset(void);
void			mpx_test_done(void);
unsigned int	mpx_test_getreg(int reg);
unsigned int	mpx_test_getpc(void);
int				mpx_test_run(int cycles);
int				mpx_test_setbreakpoint(int bp, unsigned int pc);

#endif
