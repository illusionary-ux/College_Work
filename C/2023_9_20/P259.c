#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	char c1, c2;
	double r1, r2;
	
	printf("请输入7个数据(依次为3整数、2字符、2实数): ");
	scanf("%d %d %d %c %c %lf %lf", &num1, &num2, &num3, &c1, &c2, &r1, &r2);
	printf("\n这7个数据倒序为:7-%.5lf 6-%.5lf 5-%c 4-%c 3-%d 2-%d 1-%d", r2, r1, c2, c1, num3, num2, num1);
	
	return 0;
}
