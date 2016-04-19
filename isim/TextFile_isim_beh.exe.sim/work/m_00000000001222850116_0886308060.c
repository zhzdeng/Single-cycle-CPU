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
static const char *ng0 = "//psf/Home/Desktop/Single-cycle-CPU/ALU.v";
static unsigned int ng1[] = {0U, 1U};
static unsigned int ng2[] = {0U, 4294967295U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {7U, 0U};



static void Initial_33_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t6[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB12:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB13:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t28 == 1)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t19, t5, 0, 0, 32, 0LL);
    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = (t0 + 2408);
    xsi_vlogvar_assign_value(t26, t27, 0, 0, 32);
    goto LAB12;

LAB14:    xsi_set_current_line(46, ng0);

LAB31:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t20, 32);
    t26 = (t0 + 2568);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 32);
    goto LAB30;

LAB16:    xsi_set_current_line(49, ng0);

LAB32:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 32, t20, 32);
    t26 = (t0 + 2568);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB36;

LAB33:    if (t16 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t6) = 1;

LAB36:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB30;

LAB18:    xsi_set_current_line(54, ng0);

LAB40:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    t20 = (t0 + 1048U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t19, 32, t26, 32);
    t20 = (t0 + 2568);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 32);
    goto LAB30;

LAB20:    xsi_set_current_line(57, ng0);

LAB41:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t20);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t26 = (t5 + 4);
    t27 = (t20 + 4);
    t29 = (t6 + 4);
    t10 = *((unsigned int *)t26);
    t11 = *((unsigned int *)t27);
    t12 = (t10 | t11);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t29);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB42;

LAB43:
LAB44:    t37 = (t0 + 2568);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 32);
    goto LAB30;

LAB22:    xsi_set_current_line(60, ng0);

LAB45:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t20);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t26 = (t5 + 4);
    t27 = (t20 + 4);
    t29 = (t6 + 4);
    t10 = *((unsigned int *)t26);
    t11 = *((unsigned int *)t27);
    t12 = (t10 | t11);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t29);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB46;

LAB47:
LAB48:    t37 = (t0 + 2568);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 32);
    goto LAB30;

LAB24:    xsi_set_current_line(63, ng0);

LAB49:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t4) == 0)
        goto LAB50;

LAB52:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;

LAB53:    t20 = (t0 + 2408);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t27);
    t14 = (t12 & t13);
    *((unsigned int *)t42) = t14;
    t29 = (t6 + 4);
    t30 = (t27 + 4);
    t31 = (t42 + 4);
    t15 = *((unsigned int *)t29);
    t16 = *((unsigned int *)t30);
    t17 = (t15 | t16);
    *((unsigned int *)t31) = t17;
    t18 = *((unsigned int *)t31);
    t21 = (t18 != 0);
    if (t21 == 1)
        goto LAB54;

LAB55:
LAB56:    t49 = (t0 + 2568);
    xsi_vlogvar_assign_value(t49, t42, 0, 0, 32);
    goto LAB30;

LAB26:    xsi_set_current_line(66, ng0);

LAB57:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t20);
    t9 = (t7 ^ t8);
    *((unsigned int *)t6) = t9;
    t26 = (t5 + 4);
    t27 = (t20 + 4);
    t29 = (t6 + 4);
    t10 = *((unsigned int *)t26);
    t11 = *((unsigned int *)t27);
    t12 = (t10 | t11);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t29);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB58;

LAB59:
LAB60:    t30 = (t0 + 2568);
    xsi_vlogvar_assign_value(t30, t6, 0, 0, 32);
    goto LAB30;

LAB28:    xsi_set_current_line(69, ng0);

LAB61:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t20);
    t9 = (t7 ^ t8);
    *((unsigned int *)t6) = t9;
    t26 = (t5 + 4);
    t27 = (t20 + 4);
    t29 = (t6 + 4);
    t10 = *((unsigned int *)t26);
    t11 = *((unsigned int *)t27);
    t12 = (t10 | t11);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t29);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB62;

LAB63:
LAB64:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 4294967295U);
    t30 = (t6 + 4);
    t22 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t22 & 4294967295U);
    t31 = (t0 + 2568);
    xsi_vlogvar_assign_value(t31, t6, 0, 0, 32);
    goto LAB30;

LAB35:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(52, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB39;

LAB42:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t15 | t16);
    t30 = (t5 + 4);
    t31 = (t20 + 4);
    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t21 = *((unsigned int *)t5);
    t32 = (t21 & t18);
    t22 = *((unsigned int *)t31);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t33 = (t24 & t23);
    t25 = (~(t32));
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t35 & t25);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & t34);
    goto LAB44;

LAB46:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t15 | t16);
    t30 = (t5 + 4);
    t31 = (t20 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t21 = *((unsigned int *)t30);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t34 = (~(t25));
    t32 = (t18 & t22);
    t33 = (t24 & t34);
    t35 = (~(t32));
    t36 = (~(t33));
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & t35);
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & t36);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t35);
    t41 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t41 & t36);
    goto LAB48;

LAB50:    *((unsigned int *)t6) = 1;
    goto LAB53;

LAB54:    t22 = *((unsigned int *)t42);
    t23 = *((unsigned int *)t31);
    *((unsigned int *)t42) = (t22 | t23);
    t37 = (t6 + 4);
    t43 = (t27 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    t34 = *((unsigned int *)t37);
    t35 = (~(t34));
    t36 = *((unsigned int *)t27);
    t38 = (~(t36));
    t39 = *((unsigned int *)t43);
    t40 = (~(t39));
    t32 = (t25 & t35);
    t33 = (t38 & t40);
    t41 = (~(t32));
    t44 = (~(t33));
    t45 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t45 & t41);
    t46 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t46 & t44);
    t47 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t47 & t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t48 & t44);
    goto LAB56;

LAB58:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t15 | t16);
    goto LAB60;

LAB62:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB64;

}


extern void work_m_00000000001222850116_0886308060_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_38_1};
	xsi_register_didat("work_m_00000000001222850116_0886308060", "isim/TextFile_isim_beh.exe.sim/work/m_00000000001222850116_0886308060.didat");
	xsi_register_executes(pe);
}
