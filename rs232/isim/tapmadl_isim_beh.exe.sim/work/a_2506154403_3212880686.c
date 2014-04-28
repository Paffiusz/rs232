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
static const char *ng0 = "D:/PROGRAMOWANIE/Github/rs232/rs232/rsinput.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2506154403_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1120U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 2464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1568U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t6 = (t4 == (unsigned char)0);
    if (t6 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1500U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = 0;
    t8 = (t0 + 1464U);
    xsi_variable_act(t8);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2516);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2552);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    goto LAB12;

LAB14:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2516);
    t5 = (t1 + 32U);
    t7 = *((char **)t5);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1500U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t11 = (t10 + 1);
    t1 = (t0 + 1500U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t11;
    t7 = (t0 + 1464U);
    xsi_variable_act(t7);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1500U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 8);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB9;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2552);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

}

static void work_a_2506154403_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1120U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1500U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    if (t5 == 0)
        goto LAB6;

LAB16:    if (t5 == 1)
        goto LAB7;

LAB17:    if (t5 == 2)
        goto LAB8;

LAB18:    if (t5 == 3)
        goto LAB9;

LAB19:    if (t5 == 4)
        goto LAB10;

LAB20:    if (t5 == 5)
        goto LAB11;

LAB21:    if (t5 == 6)
        goto LAB12;

LAB22:    if (t5 == 7)
        goto LAB13;

LAB23:    if (t5 == 8)
        goto LAB14;

LAB24:
LAB15:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 4777);
    t4 = (t0 + 2588);
    t6 = (t4 + 32U);
    t8 = *((char **)t6);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1236U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    t3 = (t0 + 2588);
    t8 = (t3 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t3, 7U, 1, 0LL);
    goto LAB5;

LAB7:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2588);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    goto LAB5;

LAB8:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2588);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB5;

LAB9:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2588);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB5;

LAB10:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2588);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB5;

LAB11:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2588);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB5;

LAB12:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2588);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB5;

LAB13:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2588);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB5;

LAB14:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t12 = (7 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t4 = (t0 + 2624);
    t6 = (t4 + 32U);
    t8 = *((char **)t6);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB5;

LAB25:;
}


extern void work_a_2506154403_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2506154403_3212880686_p_0,(void *)work_a_2506154403_3212880686_p_1};
	xsi_register_didat("work_a_2506154403_3212880686", "isim/tapmadl_isim_beh.exe.sim/work/a_2506154403_3212880686.didat");
	xsi_register_executes(pe);
}
