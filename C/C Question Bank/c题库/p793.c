#include <stdio.h>

int main(void)
{
	int num, yushu, sum = 0;

	printf("请输入一个数：");
	scanf("%d", &num);
	
	printf("\n该数的各位数之逆序为：");
	do
	{
		yushu = num % 10; //计算得到num的个位数字，并赋给变量yushu
		num = num / 10; //num和10相除，舍弃个位数字
		sum = sum + yushu; //将个位数字累加
		printf("%d", yushu); //将个位数字输出
	} while (num != 0); //如果num的值为0，说明所有数字都已经逐个计算完，循环停止。否则，循环继续
	
	printf("\n该的各位数之和为：%d\n", sum);

	return 0;


}