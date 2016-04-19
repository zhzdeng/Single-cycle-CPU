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
static const char *ng0 = "//psf/Home/Desktop/Single-cycle-CPU/DataRam.v";
static int ng1[] = {0, 0};
static int ng2[] = {255, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};



static void Initial_31_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
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
LAB4:    xsi_set_current_line(32, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1928);
    t16 = (t0 + 1928);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1928);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_35_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t39[8];
    char t40[8];
    char t60[8];
    char t64[8];
    char t73[8];
    char t77[8];
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
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1368U);
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

LAB11:    xsi_set_current_line(41, ng0);

LAB22:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 1928);
    t22 = (t21 + 64U);
    t29 = *((char **)t22);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t31, 32, t30, 32);
    xsi_vlog_generic_get_array_select_value(t28, 8, t4, t8, t29, 2, 1, t39, 32, 2);
    t38 = (t0 + 1928);
    t41 = (t38 + 56U);
    t42 = *((char **)t41);
    t43 = (t0 + 1928);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 1928);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t51 = (t0 + 1048U);
    t59 = *((char **)t51);
    t51 = ((char*)((ng5)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 32, t59, 32, t51, 32);
    xsi_vlog_generic_get_array_select_value(t40, 8, t42, t45, t48, 2, 1, t60, 32, 2);
    t61 = (t0 + 1928);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t65 = (t0 + 1928);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = (t0 + 1928);
    t69 = (t68 + 64U);
    t70 = *((char **)t69);
    t71 = (t0 + 1048U);
    t72 = *((char **)t71);
    t71 = ((char*)((ng4)));
    memset(t73, 0, 8);
    xsi_vlog_unsigned_add(t73, 32, t72, 32, t71, 32);
    xsi_vlog_generic_get_array_select_value(t64, 8, t63, t67, t70, 2, 1, t73, 32, 2);
    t74 = (t0 + 1928);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t78 = (t0 + 1928);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = (t0 + 1928);
    t82 = (t81 + 64U);
    t83 = *((char **)t82);
    t84 = (t0 + 1048U);
    t85 = *((char **)t84);
    xsi_vlog_generic_get_array_select_value(t77, 8, t76, t80, t83, 2, 1, t85, 32, 2);
    xsi_vlogtype_concat(t6, 32, 32, 4U, t77, 8, t64, 8, t40, 8, t28, 8);
    t84 = (t0 + 1768);
    xsi_vlogvar_assign_value(t84, t6, 0, 0, 32);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 24);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 24);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 255U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 255U);
    t38 = (t0 + 1928);
    t41 = (t0 + 1928);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 1928);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t0 + 1048U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t39, t40, t43, t46, 2, 1, t48, 32, 2);
    t47 = (t39 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (!(t49));
    t51 = (t40 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 16);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 1928);
    t29 = (t22 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 1048U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng4)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 32, t31, 32);
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

LAB17:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 1928);
    t29 = (t22 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 1048U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng5)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 32, t31, 32);
    xsi_vlog_generic_convert_array_indices(t28, t39, t21, t30, 2, 1, t40, 32, 2);
    t41 = (t28 + 4);
    t15 = *((unsigned int *)t41);
    t50 = (!(t15));
    t42 = (t39 + 4);
    t16 = *((unsigned int *)t42);
    t53 = (!(t16));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
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
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 1928);
    t29 = (t22 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 1048U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng6)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 32, t31, 32);
    xsi_vlog_generic_convert_array_indices(t28, t39, t21, t30, 2, 1, t40, 32, 2);
    t41 = (t28 + 4);
    t15 = *((unsigned int *)t41);
    t50 = (!(t15));
    t42 = (t39 + 4);
    t16 = *((unsigned int *)t42);
    t53 = (!(t16));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB20;

LAB21:    goto LAB12;

LAB14:    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t40);
    t57 = (t55 - t56);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t38, t28, 0, *((unsigned int *)t40), t58, 0LL);
    goto LAB15;

LAB16:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t39);
    t57 = (t17 - t18);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t39), t58, 0LL);
    goto LAB17;

LAB18:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t39);
    t57 = (t17 - t18);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t39), t58, 0LL);
    goto LAB19;

LAB20:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t39);
    t57 = (t17 - t18);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t39), t58, 0LL);
    goto LAB21;

}


extern void work_m_00000000002278912021_0425646255_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000002278912021_0425646255", "isim/TextFile_isim_beh.exe.sim/work/m_00000000002278912021_0425646255.didat");
	xsi_register_executes(pe);
}
