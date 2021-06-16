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
static const char *ng0 = "C:/Users/saina/Desktop/Project_9632644 - Reset/instruction_memory.v";
static const char *ng1 = "MyMemory.txt";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U};



static void Initial_26_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1608);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_37_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Initial_42_2(char *t0)
{
    char t1[8];
    char t2[8];
    char t3[8];
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t4 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 3);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 8191U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 8191U);
    memset(t2, 0, 8);
    t13 = (t2 + 4);
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t2) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB4;

LAB3:    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 8191U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 8191U);
    xsi_vlogtype_concat(t1, 13, 13, 1U, t2, 13);
    t23 = (t0 + 2088);
    xsi_vlogvar_assign_value(t23, t1, 0, 0, 13);

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t2) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB3;

}

static void Always_48_3(char *t0)
{
    char t7[8];
    char t17[8];
    char t52[16];
    char t56[8];
    char t63[8];
    char t67[8];
    char t80[8];
    char t87[8];
    char t91[8];
    char t104[8];
    char t111[8];
    char t115[8];
    char t128[8];
    char t135[8];
    char t139[8];
    char t152[8];
    char t159[8];
    char t163[8];
    char t176[8];
    char t183[8];
    char t187[8];
    char t200[8];
    char t207[8];
    char t211[8];
    char t224[8];
    char t231[8];
    char t235[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
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
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    char *t114;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t136;
    char *t137;
    char *t138;
    char *t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t151;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t160;
    char *t161;
    char *t162;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t184;
    char *t185;
    char *t186;
    char *t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    char *t199;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    char *t206;
    char *t208;
    char *t209;
    char *t210;
    char *t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    char *t222;
    char *t223;
    char *t225;
    char *t226;
    char *t227;
    char *t228;
    char *t229;
    char *t230;
    char *t232;
    char *t233;
    char *t234;
    char *t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 3);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 3);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 8191U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 8191U);
    memset(t17, 0, 8);
    t18 = (t6 + 4);
    t19 = (t7 + 4);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB7;

LAB6:    if (t29 != 0)
        goto LAB8;

LAB9:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 3);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 3);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 8191U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 8191U);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 13);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t20 = (t13 | t16);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB16;

LAB13:    if (t23 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t7) = 1;

LAB16:    t8 = (t7 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    *((unsigned int *)t17) = 1;
    goto LAB9;

LAB8:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(50, ng0);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 1928);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 3);
    goto LAB12;

LAB15:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(53, ng0);

LAB20:    xsi_set_current_line(54, ng0);
    t9 = (t0 + 1928);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t32 = (t18 + 4);
    t33 = (t19 + 4);
    t31 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    t35 = (t31 ^ t34);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t33);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t32);
    t43 = *((unsigned int *)t33);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB24;

LAB21:    if (t44 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t17) = 1;

LAB24:    t40 = (t17 + 4);
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(63, ng0);

LAB29:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 3, t4, 3, t5, 3);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 3);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);

LAB27:    goto LAB19;

LAB23:    t39 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(55, ng0);

LAB28:    xsi_set_current_line(56, ng0);
    t53 = (t0 + 1608);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t57 = (t0 + 1608);
    t58 = (t57 + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 1608);
    t61 = (t60 + 64U);
    t62 = *((char **)t61);
    t64 = ((char*)((ng3)));
    t65 = ((char*)((ng3)));
    t66 = ((char*)((ng3)));
    t68 = (t0 + 1208U);
    t69 = *((char **)t68);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t70 = (t69 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (t71 >> 3);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 3);
    *((unsigned int *)t68) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 8191U);
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 8191U);
    xsi_vlogtype_concat(t63, 16, 16, 4U, t67, 13, t66, 1, t65, 1, t64, 1);
    xsi_vlog_generic_get_array_select_value(t56, 8, t55, t59, t62, 2, 1, t63, 16, 2);
    t77 = (t0 + 1608);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t81 = (t0 + 1608);
    t82 = (t81 + 72U);
    t83 = *((char **)t82);
    t84 = (t0 + 1608);
    t85 = (t84 + 64U);
    t86 = *((char **)t85);
    t88 = ((char*)((ng2)));
    t89 = ((char*)((ng3)));
    t90 = ((char*)((ng3)));
    t92 = (t0 + 1208U);
    t93 = *((char **)t92);
    memset(t91, 0, 8);
    t92 = (t91 + 4);
    t94 = (t93 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (t95 >> 3);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 3);
    *((unsigned int *)t92) = t98;
    t99 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t99 & 8191U);
    t100 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t100 & 8191U);
    xsi_vlogtype_concat(t87, 16, 16, 4U, t91, 13, t90, 1, t89, 1, t88, 1);
    xsi_vlog_generic_get_array_select_value(t80, 8, t79, t83, t86, 2, 1, t87, 16, 2);
    t101 = (t0 + 1608);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t105 = (t0 + 1608);
    t106 = (t105 + 72U);
    t107 = *((char **)t106);
    t108 = (t0 + 1608);
    t109 = (t108 + 64U);
    t110 = *((char **)t109);
    t112 = ((char*)((ng3)));
    t113 = ((char*)((ng2)));
    t114 = ((char*)((ng3)));
    t116 = (t0 + 1208U);
    t117 = *((char **)t116);
    memset(t115, 0, 8);
    t116 = (t115 + 4);
    t118 = (t117 + 4);
    t119 = *((unsigned int *)t117);
    t120 = (t119 >> 3);
    *((unsigned int *)t115) = t120;
    t121 = *((unsigned int *)t118);
    t122 = (t121 >> 3);
    *((unsigned int *)t116) = t122;
    t123 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t123 & 8191U);
    t124 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t124 & 8191U);
    xsi_vlogtype_concat(t111, 16, 16, 4U, t115, 13, t114, 1, t113, 1, t112, 1);
    xsi_vlog_generic_get_array_select_value(t104, 8, t103, t107, t110, 2, 1, t111, 16, 2);
    t125 = (t0 + 1608);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t129 = (t0 + 1608);
    t130 = (t129 + 72U);
    t131 = *((char **)t130);
    t132 = (t0 + 1608);
    t133 = (t132 + 64U);
    t134 = *((char **)t133);
    t136 = ((char*)((ng2)));
    t137 = ((char*)((ng2)));
    t138 = ((char*)((ng3)));
    t140 = (t0 + 1208U);
    t141 = *((char **)t140);
    memset(t139, 0, 8);
    t140 = (t139 + 4);
    t142 = (t141 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (t143 >> 3);
    *((unsigned int *)t139) = t144;
    t145 = *((unsigned int *)t142);
    t146 = (t145 >> 3);
    *((unsigned int *)t140) = t146;
    t147 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t147 & 8191U);
    t148 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t148 & 8191U);
    xsi_vlogtype_concat(t135, 16, 16, 4U, t139, 13, t138, 1, t137, 1, t136, 1);
    xsi_vlog_generic_get_array_select_value(t128, 8, t127, t131, t134, 2, 1, t135, 16, 2);
    t149 = (t0 + 1608);
    t150 = (t149 + 56U);
    t151 = *((char **)t150);
    t153 = (t0 + 1608);
    t154 = (t153 + 72U);
    t155 = *((char **)t154);
    t156 = (t0 + 1608);
    t157 = (t156 + 64U);
    t158 = *((char **)t157);
    t160 = ((char*)((ng3)));
    t161 = ((char*)((ng3)));
    t162 = ((char*)((ng2)));
    t164 = (t0 + 1208U);
    t165 = *((char **)t164);
    memset(t163, 0, 8);
    t164 = (t163 + 4);
    t166 = (t165 + 4);
    t167 = *((unsigned int *)t165);
    t168 = (t167 >> 3);
    *((unsigned int *)t163) = t168;
    t169 = *((unsigned int *)t166);
    t170 = (t169 >> 3);
    *((unsigned int *)t164) = t170;
    t171 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t171 & 8191U);
    t172 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t172 & 8191U);
    xsi_vlogtype_concat(t159, 16, 16, 4U, t163, 13, t162, 1, t161, 1, t160, 1);
    xsi_vlog_generic_get_array_select_value(t152, 8, t151, t155, t158, 2, 1, t159, 16, 2);
    t173 = (t0 + 1608);
    t174 = (t173 + 56U);
    t175 = *((char **)t174);
    t177 = (t0 + 1608);
    t178 = (t177 + 72U);
    t179 = *((char **)t178);
    t180 = (t0 + 1608);
    t181 = (t180 + 64U);
    t182 = *((char **)t181);
    t184 = ((char*)((ng2)));
    t185 = ((char*)((ng3)));
    t186 = ((char*)((ng2)));
    t188 = (t0 + 1208U);
    t189 = *((char **)t188);
    memset(t187, 0, 8);
    t188 = (t187 + 4);
    t190 = (t189 + 4);
    t191 = *((unsigned int *)t189);
    t192 = (t191 >> 3);
    *((unsigned int *)t187) = t192;
    t193 = *((unsigned int *)t190);
    t194 = (t193 >> 3);
    *((unsigned int *)t188) = t194;
    t195 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t195 & 8191U);
    t196 = *((unsigned int *)t188);
    *((unsigned int *)t188) = (t196 & 8191U);
    xsi_vlogtype_concat(t183, 16, 16, 4U, t187, 13, t186, 1, t185, 1, t184, 1);
    xsi_vlog_generic_get_array_select_value(t176, 8, t175, t179, t182, 2, 1, t183, 16, 2);
    t197 = (t0 + 1608);
    t198 = (t197 + 56U);
    t199 = *((char **)t198);
    t201 = (t0 + 1608);
    t202 = (t201 + 72U);
    t203 = *((char **)t202);
    t204 = (t0 + 1608);
    t205 = (t204 + 64U);
    t206 = *((char **)t205);
    t208 = ((char*)((ng3)));
    t209 = ((char*)((ng2)));
    t210 = ((char*)((ng2)));
    t212 = (t0 + 1208U);
    t213 = *((char **)t212);
    memset(t211, 0, 8);
    t212 = (t211 + 4);
    t214 = (t213 + 4);
    t215 = *((unsigned int *)t213);
    t216 = (t215 >> 3);
    *((unsigned int *)t211) = t216;
    t217 = *((unsigned int *)t214);
    t218 = (t217 >> 3);
    *((unsigned int *)t212) = t218;
    t219 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t219 & 8191U);
    t220 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t220 & 8191U);
    xsi_vlogtype_concat(t207, 16, 16, 4U, t211, 13, t210, 1, t209, 1, t208, 1);
    xsi_vlog_generic_get_array_select_value(t200, 8, t199, t203, t206, 2, 1, t207, 16, 2);
    t221 = (t0 + 1608);
    t222 = (t221 + 56U);
    t223 = *((char **)t222);
    t225 = (t0 + 1608);
    t226 = (t225 + 72U);
    t227 = *((char **)t226);
    t228 = (t0 + 1608);
    t229 = (t228 + 64U);
    t230 = *((char **)t229);
    t232 = ((char*)((ng2)));
    t233 = ((char*)((ng2)));
    t234 = ((char*)((ng2)));
    t236 = (t0 + 1208U);
    t237 = *((char **)t236);
    memset(t235, 0, 8);
    t236 = (t235 + 4);
    t238 = (t237 + 4);
    t239 = *((unsigned int *)t237);
    t240 = (t239 >> 3);
    *((unsigned int *)t235) = t240;
    t241 = *((unsigned int *)t238);
    t242 = (t241 >> 3);
    *((unsigned int *)t236) = t242;
    t243 = *((unsigned int *)t235);
    *((unsigned int *)t235) = (t243 & 8191U);
    t244 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t244 & 8191U);
    xsi_vlogtype_concat(t231, 16, 16, 4U, t235, 13, t234, 1, t233, 1, t232, 1);
    xsi_vlog_generic_get_array_select_value(t224, 8, t223, t227, t230, 2, 1, t231, 16, 2);
    xsi_vlogtype_concat(t52, 64, 64, 8U, t224, 8, t200, 8, t176, 8, t152, 8, t128, 8, t104, 8, t80, 8, t56, 8);
    t245 = (t0 + 1768);
    xsi_vlogvar_assign_value(t245, t52, 0, 0, 64);
    goto LAB27;

}


extern void work_m_00000000000401414085_0610666722_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Initial_37_1,(void *)Initial_42_2,(void *)Always_48_3};
	xsi_register_didat("work_m_00000000000401414085_0610666722", "isim/MIPSTest_isim_beh.exe.sim/work/m_00000000000401414085_0610666722.didat");
	xsi_register_executes(pe);
}
