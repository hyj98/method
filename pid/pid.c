#include "pid.h"


float cur_val = 0;//当前值
float i_sum = 0, e[2] = {0};//i_sum为积分的误差, e[1]为本次误差, e[0]为上次误差


// 位置式 PID 算法
//调用pid算法实现稳定达到目标值(需调用几次,"慢慢"达到设定值)
float pid_oprate(void)
{
	float u;//每次pid的结果(其实也是当前值)

	e[1] = AIM_VAL - cur_val;
	printf("e[1] =%f\n", e[1]);//差值稳定减少的(稳定的接近设定值)
	i_sum += e[1];

	u = KP*e[1] + KI*i_sum + KD*(e[1]-e[0]);//pid玩的就是这公式
	e[0] = e[1];

	return u;
}


// 增量式 PID 算法


