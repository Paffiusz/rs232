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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/PROGRAMOWANIE/Github/rs232/rs232/rsoutput.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1109911247_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1028U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1316U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    t5 = (t10 == 9);
    if (t5 == 1)
        goto LAB10;

LAB11:    t1 = (t0 + 1316U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t6 = (t11 == 0);
    t2 = t6;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:
LAB6:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1384U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)0);
    if (t5 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 1384U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)1);
    if (t5 != 0)
        goto LAB16;

LAB17:
LAB14:    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1384U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((unsigned char *)t3) = (unsigned char)1;
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t1 = (t0 + 2180);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1384U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB6;

LAB10:    t2 = (unsigned char)1;
    goto LAB12;

LAB13:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1316U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    t7 = (t0 + 1280U);
    xsi_variable_act(t7);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2216);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1316U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    if (t10 == 0)
        goto LAB19;

LAB30:    if (t10 == 1)
        goto LAB20;

LAB31:    if (t10 == 2)
        goto LAB21;

LAB32:    if (t10 == 3)
        goto LAB22;

LAB33:    if (t10 == 4)
        goto LAB23;

LAB34:    if (t10 == 5)
        goto LAB24;

LAB35:    if (t10 == 6)
        goto LAB25;

LAB36:    if (t10 == 7)
        goto LAB26;

LAB37:    if (t10 == 8)
        goto LAB27;

LAB38:    if (t10 == 9)
        goto LAB28;

LAB39:
LAB29:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2216);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB18:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1316U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    t11 = (t10 + 1);
    t1 = (t0 + 1316U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t11;
    t7 = (t0 + 1280U);
    xsi_variable_act(t7);
    goto LAB14;

LAB19:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2216);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (0 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB21:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (1 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB22:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (2 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB23:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (3 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB24:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (4 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB25:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (5 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB26:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (6 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB27:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = (7 - 7);
    t13 = (t10 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2216);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB28:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2216);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB18;

LAB40:;
}


extern void work_a_1109911247_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1109911247_3212880686_p_0};
	xsi_register_didat("work_a_1109911247_3212880686", "isim/tapmadl_isim_beh.exe.sim/work/a_1109911247_3212880686.didat");
	xsi_register_executes(pe);
}
