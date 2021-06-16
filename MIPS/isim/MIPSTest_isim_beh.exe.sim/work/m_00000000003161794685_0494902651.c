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
static const char *ng0 = "C:/Users/saina/Desktop/Project_9632644 - Reset/myDataMem.v";
static int ng1[] = {0, 0};
static int ng2[] = {1023, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};



static void Initial_36_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t12 = (t0 + 2088);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2408);
    t18 = (t0 + 2408);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2088);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB7;

}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t39[8];
    char t40[8];
    char t59[8];
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
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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
LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t6) = 1;

LAB21:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 8);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 255U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 255U);
    t38 = (t0 + 2408);
    t41 = (t0 + 2408);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 2408);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t0 + 1368U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t39, t40, t43, t46, 2, 1, t48, 16, 2);
    t47 = (t39 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (!(t49));
    t51 = (t40 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2408);
    t29 = (t22 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 1368U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng3)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 16, t31, 32);
    xsi_vlog_generic_convert_array_indices(t28, t39, t21, t30, 2, 1, t40, 32, 2);
    t41 = (t28 + 4);
    t15 = *((unsigned int *)t41);
    t50 = (!(t15));
    t42 = (t39 + 4);
    t16 = *((unsigned int *)t42);
    t53 = (!(t16));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB16;

LAB17:    goto LAB12;

LAB14:    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t40);
    t57 = (t55 - t56);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t38, t28, 0, *((unsigned int *)t40), t58);
    goto LAB15;

LAB16:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t39);
    t57 = (t17 - t18);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t39), t58);
    goto LAB17;

LAB20:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(50, ng0);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t29 = *((char **)t22);
    t30 = (t0 + 2408);
    t31 = (t30 + 72U);
    t38 = *((char **)t31);
    t41 = (t0 + 2408);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = (t0 + 1368U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng4)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 16, t45, 16, t44, 16);
    xsi_vlog_generic_get_array_select_value(t39, 8, t29, t38, t43, 2, 1, t40, 16, 2);
    t46 = (t0 + 2408);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t51 = (t0 + 2408);
    t60 = (t51 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 2408);
    t63 = (t62 + 64U);
    t64 = *((char **)t63);
    t65 = (t0 + 1368U);
    t66 = *((char **)t65);
    xsi_vlog_generic_get_array_select_value(t59, 8, t48, t61, t64, 2, 1, t66, 16, 2);
    xsi_vlogtype_concat(t28, 16, 16, 2U, t59, 8, t39, 8);
    t65 = (t0 + 2248);
    xsi_vlogvar_assign_value(t65, t28, 0, 0, 16);
    goto LAB24;

}


extern void work_m_00000000003161794685_0494902651_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_42_1};
	xsi_register_didat("work_m_00000000003161794685_0494902651", "isim/MIPSTest_isim_beh.exe.sim/work/m_00000000003161794685_0494902651.didat");
	xsi_register_executes(pe);
}
