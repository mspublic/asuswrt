#ifndef _RC_SYSDEPS_H_
#define _RC_SYSDEPS_H_
#include <rtconfig.h>

/* sysdeps/init-PLATFORM.c */
extern void init_devs(void);
extern void generate_switch_para(void);
extern void init_switch();
extern void config_switch();
extern int switch_exist(void);
extern void init_wl(void);
extern void fini_wl(void);
extern void init_syspara(void);
extern void generate_wl_para(int unit, int subunit);
#if defined(RTCONFIG_RALINK)
extern void reinit_hwnat(int unit);
#else
static inline void reinit_hwnat(int unit) { }
#endif
extern char *get_wlifname(int unit, int subunit, int subunit_x, char *buf);
extern int wl_exist(char *ifname, int band);
#endif
