#include<stdio.h>

int main(void)
{
	int n1, n2, n3;
	char c4, c5;
	double n6, n7;
	
	printf("请输入7个数据(依次为3整数、2字符、2实数): ");
	scanf("%d %d %d %c %c %lf %lf", &n1, &n2, &n3, &c4, &c5, &n6, &n7);
	printf("\n这7个数据倒序为: 7-%.5lf 6-%.5lf 5-%c 4-%c 3-%d 2-%d 1-%d", n7, n6, c5, c4, n3, n2, n1);
	return 0;
}