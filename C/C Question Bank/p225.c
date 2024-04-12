#include <stdio.h>

int main(void)
{
	int i, ge, shi, bai, num, flag;

	printf("Please Input a number: ");
	scanf("%d", &num);

	printf("\nResult: ");	
	flag = 0; //判断前将0赋给变量flag
	for (i = 100; i<=999; i++)
	{
		ge = i % 10;
		bai = i / 100;
		shi = (i - bai * 100) / 10;		
		if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == num) 
		{
			printf("%5d", i); //i满足条件，输出i
			flag = 1; //i满足条件，将变量flag的值更新为1
		}
	}
	if (flag == 0) //判断结束, 变量flag的值仍然为0, 说明没有满足条件的三位数
	{
		printf("not Find!\n");
	}

	return 0;
}



