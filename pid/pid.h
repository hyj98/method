#include <stdio.h>

#ifndef _PID__H_
#define _PID__H_


#define AIM_VAL 999.9
#define KP 0.1
#define KI 0.04
#define KD 0.05


float cur_val;//当前值
float i_sum, e[2];//i_sum为积分的误差, e[1]为本次误差, e[0]为上次误差


// 位置式 PID 算法
float pid_oprate(void);

#endif