#include "pid.h"


extern float cur_val;//当前值


int main(int argc, char const *argv[])
{
		for (int i = 0; i < 200; ++i)//模拟定时器慢慢调用pid算法实现稳定达到目标值
		{
			cur_val = pid_oprate();
		}
		printf("pid_val=%f\n", cur_val);
	
	return 0;
}
