/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/saina/Desktop/Project_9632644 - Reset/regIDEX.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_65_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(65, ng0);

LAB2:    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4808);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5128);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(80, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(81, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(82, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_87_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 7896);
    *((int *)t2) = 1;
    t3 = (t0 + 7608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(89, ng0);

LAB13:    xsi_set_current_line(90, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = (t0 + 4008);
    xsi_vlogvar_assign_value(t28, t29, 0, 0, 16);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 5288);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 5448);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 5928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 6088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB12;

}


extern void work_m_00000000001184400008_3024787989_init()
{
	static char *pe[] = {(void *)Initial_65_0,(void *)Always_87_1};
	xsi_register_didat("work_m_00000000001184400008_3024787989", "isim/MIPSTest_isim_beh.exe.sim/work/m_00000000001184400008_3024787989.didat");
	xsi_register_executes(pe);
}
