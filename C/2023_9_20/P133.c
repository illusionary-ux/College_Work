#include<stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5, num6, 
	num7, num8, num9, num10, num11;
	
	printf("\n请输入11个数字：");
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, 
	&num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
	printf("\n解密结果为：%c%c%c%c%c%c%c%c%c%c%c", num1, num2, num3, num4, 
	num5, num6, num7, num8, num9, num10, num11);
	return 0;
}
