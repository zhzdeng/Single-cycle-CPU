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
static const char *ng0 = "//psf/Home/Desktop/Single-cycle-CPU/InstructionRom.v";
static const char *ng1 = "myRomData.list";
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Initial_31_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1768);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t41[8];
    char t42[8];
    char t61[8];
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
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    int t52;
    char *t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
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

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
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

LAB11:    xsi_set_current_line(40, ng0);

LAB22:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 1768);
    t22 = (t21 + 64U);
    t29 = *((char **)t22);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t31, 32, t30, 32);
    xsi_vlog_generic_get_array_select_value(t28, 8, t4, t8, t29, 2, 1, t41, 32, 2);
    t32 = (t0 + 1768);
    t33 = (t32 + 56U);
    t40 = *((char **)t33);
    t43 = (t0 + 1768);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 1768);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = (t0 + 1048U);
    t50 = *((char **)t49);
    t49 = ((char*)((ng3)));
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t50, 32, t49, 32);
    xsi_vlog_generic_get_array_select_value(t42, 8, t40, t45, t48, 2, 1, t61, 32, 2);
    t53 = (t0 + 1768);
    t62 = (t53 + 56U);
    t63 = *((char **)t62);
    t65 = (t0 + 1768);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = (t0 + 1768);
    t69 = (t68 + 64U);
    t70 = *((char **)t69);
    t71 = (t0 + 1048U);
    t72 = *((char **)t71);
    t71 = ((char*)((ng2)));
    memset(t73, 0, 8);
    xsi_vlog_unsigned_add(t73, 32, t72, 32, t71, 32);
    xsi_vlog_generic_get_array_select_value(t64, 8, t63, t67, t70, 2, 1, t73, 32, 2);
    t74 = (t0 + 1768);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t78 = (t0 + 1768);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = (t0 + 1768);
    t82 = (t81 + 64U);
    t83 = *((char **)t82);
    t84 = (t0 + 1048U);
    t85 = *((char **)t84);
    xsi_vlog_generic_get_array_select_value(t77, 8, t76, t80, t83, 2, 1, t85, 32, 2);
    xsi_vlogtype_concat(t6, 32, 32, 4U, t77, 8, t64, 8, t42, 8, t28, 8);
    t84 = (t0 + 1608);
    xsi_vlogvar_assign_value(t84, t6, 0, 0, 32);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(36, ng0);
    t29 = (t0 + 1608);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t28 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 24);
    *((unsigned int *)t28) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 24);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 255U);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 255U);
    t40 = (t0 + 1768);
    t43 = (t0 + 1768);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 1768);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = (t0 + 1048U);
    t50 = *((char **)t49);
    xsi_vlog_generic_convert_array_indices(t41, t42, t45, t48, 2, 1, t50, 32, 2);
    t49 = (t41 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (!(t51));
    t53 = (t42 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t8 = (t0 + 1768);
    t21 = (t0 + 1768);
    t22 = (t21 + 72U);
    t29 = *((char **)t22);
    t30 = (t0 + 1768);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 1048U);
    t40 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t40, 32, t33, 32);
    xsi_vlog_generic_convert_array_indices(t28, t41, t29, t32, 2, 1, t42, 32, 2);
    t43 = (t28 + 4);
    t15 = *((unsigned int *)t43);
    t52 = (!(t15));
    t44 = (t41 + 4);
    t16 = *((unsigned int *)t44);
    t55 = (!(t16));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t8 = (t0 + 1768);
    t21 = (t0 + 1768);
    t22 = (t21 + 72U);
    t29 = *((char **)t22);
    t30 = (t0 + 1768);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 1048U);
    t40 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t40, 32, t33, 32);
    xsi_vlog_generic_convert_array_indices(t28, t41, t29, t32, 2, 1, t42, 32, 2);
    t43 = (t28 + 4);
    t15 = *((unsigned int *)t43);
    t52 = (!(t15));
    t44 = (t41 + 4);
    t16 = *((unsigned int *)t44);
    t55 = (!(t16));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t8 = (t0 + 1768);
    t21 = (t0 + 1768);
    t22 = (t21 + 72U);
    t29 = *((char **)t22);
    t30 = (t0 + 1768);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 1048U);
    t40 = *((char **)t33);
    t33 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t40, 32, t33, 32);
    xsi_vlog_generic_convert_array_indices(t28, t41, t29, t32, 2, 1, t42, 32, 2);
    t43 = (t28 + 4);
    t15 = *((unsigned int *)t43);
    t52 = (!(t15));
    t44 = (t41 + 4);
    t16 = *((unsigned int *)t44);
    t55 = (!(t16));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB20;

LAB21:    goto LAB12;

LAB14:    t57 = *((unsigned int *)t41);
    t58 = *((unsigned int *)t42);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t40, t28, 0, *((unsigned int *)t42), t60, 0LL);
    goto LAB15;

LAB16:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t41);
    t59 = (t17 - t18);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t41), t60, 0LL);
    goto LAB17;

LAB18:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t41);
    t59 = (t17 - t18);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t41), t60, 0LL);
    goto LAB19;

LAB20:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t41);
    t59 = (t17 - t18);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t41), t60, 0LL);
    goto LAB21;

}


extern void work_m_00000000003376651501_2461783960_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_33_1};
	xsi_register_didat("work_m_00000000003376651501_2461783960", "isim/TextFile_isim_beh.exe.sim/work/m_00000000003376651501_2461783960.didat");
	xsi_register_executes(pe);
}
