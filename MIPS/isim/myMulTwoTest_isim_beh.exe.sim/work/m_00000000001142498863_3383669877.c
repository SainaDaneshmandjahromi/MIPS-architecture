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
static const char *ng0 = "C:/Users/saina/Desktop/Project_9632644 - Reset/CuForMultiPlier.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {16, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {2U, 0U};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_46_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t39[8];
    char t54[8];
    char t62[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t62, t22, 8);

LAB16:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB35;

LAB32:    if (t18 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t6) = 1;

LAB35:    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2408);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t36 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t38);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t37);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t37);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB18;

LAB17:    if (t50 != 0)
        goto LAB19;

LAB20:    memset(t54, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t55) != 0)
        goto LAB23;

LAB24:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t22 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t39) = 1;
    goto LAB20;

LAB19:    t53 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB23:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t22 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t22);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB27;

LAB28:    xsi_set_current_line(49, ng0);

LAB31:    xsi_set_current_line(50, ng0);
    t100 = ((char*)((ng4)));
    t101 = (t0 + 2088);
    xsi_vlogvar_assign_value(t101, t100, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    goto LAB30;

LAB34:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(54, ng0);

LAB39:    xsi_set_current_line(55, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 2088);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB38;

}

static void Always_60_2(char *t0)
{
    char t8[8];
    char t32[8];
    char t39[8];
    char t43[8];
    char t58[8];
    char t66[8];
    char t68[8];
    char t84[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB79;

LAB76:    if (t20 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t8) = 1;

LAB79:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(63, ng0);

LAB13:    xsi_set_current_line(64, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 2248);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t3 = (t32 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t15 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    xsi_vlogtype_concat(t8, 17, 17, 2U, t32, 16, t2, 1);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 17);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB15;

LAB14:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB16;

LAB17:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB12;

LAB15:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(67, ng0);

LAB22:    xsi_set_current_line(68, ng0);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = (t0 + 2728);
    t33 = (t31 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2568);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_index_select_value(t32, 1, t30, t34, 2, t37, 5, 2);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t40 = (t32 + 4);
    t41 = (t38 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t38);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t41);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t25 = *((unsigned int *)t40);
    t26 = *((unsigned int *)t41);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB26;

LAB23:    if (t27 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t39) = 1;

LAB26:    memset(t43, 0, 8);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t39);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t44) != 0)
        goto LAB29;

LAB30:    t51 = (t43 + 4);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t51);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB31;

LAB32:    memcpy(t92, t43, 8);

LAB33:    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t8, 1, t4, t7, 2, t23, 5, 2);
    t24 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t30 = (t8 + 4);
    t31 = (t24 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t24);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t31);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t30);
    t19 = *((unsigned int *)t31);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB52;

LAB49:    if (t20 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t32) = 1;

LAB52:    memset(t39, 0, 8);
    t34 = (t32 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t32);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t34) != 0)
        goto LAB55;

LAB56:    t36 = (t39 + 4);
    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t36);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB57;

LAB58:    memcpy(t84, t39, 8);

LAB59:    t83 = (t84 + 4);
    t119 = *((unsigned int *)t83);
    t120 = (~(t119));
    t121 = *((unsigned int *)t84);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(77, ng0);

LAB75:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB73:
LAB47:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 5, t4, 5, t5, 5);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    goto LAB21;

LAB25:    t42 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t43) = 1;
    goto LAB30;

LAB29:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB30;

LAB31:    t55 = (t0 + 2728);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t59 = (t0 + 2728);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 2568);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng6)));
    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 32, t64, 5, t65, 32);
    xsi_vlog_generic_get_index_select_value(t58, 1, t57, t61, 2, t66, 32, 2);
    t67 = ((char*)((ng4)));
    memset(t68, 0, 8);
    t69 = (t58 + 4);
    t70 = (t67 + 4);
    t71 = *((unsigned int *)t58);
    t72 = *((unsigned int *)t67);
    t73 = (t71 ^ t72);
    t74 = *((unsigned int *)t69);
    t75 = *((unsigned int *)t70);
    t76 = (t74 ^ t75);
    t77 = (t73 | t76);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t70);
    t80 = (t78 | t79);
    t81 = (~(t80));
    t82 = (t77 & t81);
    if (t82 != 0)
        goto LAB37;

LAB34:    if (t80 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t68) = 1;

LAB37:    memset(t84, 0, 8);
    t85 = (t68 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t68);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t85) != 0)
        goto LAB40;

LAB41:    t93 = *((unsigned int *)t43);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t43 + 4);
    t97 = (t84 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t83 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t84) = 1;
    goto LAB41;

LAB40:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB41;

LAB42:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t43 + 4);
    t107 = (t84 + 4);
    t108 = *((unsigned int *)t43);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB44;

LAB45:    xsi_set_current_line(69, ng0);

LAB48:    xsi_set_current_line(70, ng0);
    t130 = ((char*)((ng7)));
    t131 = (t0 + 1928);
    xsi_vlogvar_assign_value(t131, t130, 0, 0, 2);
    goto LAB47;

LAB51:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t39) = 1;
    goto LAB56;

LAB55:    t35 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB56;

LAB57:    t37 = (t0 + 2728);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t41 = (t0 + 2728);
    t42 = (t41 + 72U);
    t44 = *((char **)t42);
    t50 = (t0 + 2568);
    t51 = (t50 + 56U);
    t55 = *((char **)t51);
    t56 = ((char*)((ng6)));
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 32, t55, 5, t56, 32);
    xsi_vlog_generic_get_index_select_value(t43, 1, t40, t44, 2, t58, 32, 2);
    t57 = ((char*)((ng2)));
    memset(t66, 0, 8);
    t59 = (t43 + 4);
    t60 = (t57 + 4);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t57);
    t52 = (t48 ^ t49);
    t53 = *((unsigned int *)t59);
    t54 = *((unsigned int *)t60);
    t71 = (t53 ^ t54);
    t72 = (t52 | t71);
    t73 = *((unsigned int *)t59);
    t74 = *((unsigned int *)t60);
    t75 = (t73 | t74);
    t76 = (~(t75));
    t77 = (t72 & t76);
    if (t77 != 0)
        goto LAB63;

LAB60:    if (t75 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t66) = 1;

LAB63:    memset(t68, 0, 8);
    t62 = (t66 + 4);
    t78 = *((unsigned int *)t62);
    t79 = (~(t78));
    t80 = *((unsigned int *)t66);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t62) != 0)
        goto LAB66;

LAB67:    t86 = *((unsigned int *)t39);
    t87 = *((unsigned int *)t68);
    t88 = (t86 & t87);
    *((unsigned int *)t84) = t88;
    t64 = (t39 + 4);
    t65 = (t68 + 4);
    t67 = (t84 + 4);
    t89 = *((unsigned int *)t64);
    t90 = *((unsigned int *)t65);
    t93 = (t89 | t90);
    *((unsigned int *)t67) = t93;
    t94 = *((unsigned int *)t67);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB59;

LAB62:    t61 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t68) = 1;
    goto LAB67;

LAB66:    t63 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB67;

LAB68:    t99 = *((unsigned int *)t84);
    t100 = *((unsigned int *)t67);
    *((unsigned int *)t84) = (t99 | t100);
    t69 = (t39 + 4);
    t70 = (t68 + 4);
    t101 = *((unsigned int *)t39);
    t102 = (~(t101));
    t103 = *((unsigned int *)t69);
    t104 = (~(t103));
    t105 = *((unsigned int *)t68);
    t108 = (~(t105));
    t109 = *((unsigned int *)t70);
    t110 = (~(t109));
    t116 = (t102 & t104);
    t117 = (t108 & t110);
    t111 = (~(t116));
    t112 = (~(t117));
    t113 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t113 & t111);
    t114 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t114 & t112);
    t115 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t115 & t111);
    t118 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t118 & t112);
    goto LAB70;

LAB71:    xsi_set_current_line(73, ng0);

LAB74:    xsi_set_current_line(74, ng0);
    t85 = ((char*)((ng4)));
    t91 = (t0 + 1928);
    xsi_vlogvar_assign_value(t91, t85, 0, 0, 2);
    goto LAB73;

LAB78:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(84, ng0);

LAB83:    xsi_set_current_line(85, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB82;

}


extern void work_m_00000000001142498863_3383669877_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_46_1,(void *)Always_60_2};
	xsi_register_didat("work_m_00000000001142498863_3383669877", "isim/myMulTwoTest_isim_beh.exe.sim/work/m_00000000001142498863_3383669877.didat");
	xsi_register_executes(pe);
}
