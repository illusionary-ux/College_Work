#include <stdio.h>

int main(void)
{
	float a1, a2, a3, zz;

	printf("请输入3个数：");
	scanf("%f %f %f", &a1, &a2, &a3);
	if (a1 < a2)
	{
		zz = a1;
		a1 = a2;
		a2 = zz;
	}
	if (a2 < a3)
	{
		zz = a2;
		a2 = a3;
		a3 = zz;
	}
	if (a1 < a2)
	{
		zz = a1;
		a1 = a2;
		a2 = zz;
	}
	printf("\n这三个数由大到小为: %.2f   %.2f   %.2f\n", a1, a2, a3);
	return 0;
}