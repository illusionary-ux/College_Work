#include<stdio.h>

int main(void)
{
	int data1, data2, zhuanhuan;
	char op;
	double sum = 0;

	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &data1, &op, &data2);
	zhuanhuan = (int)op;
	switch (zhuanhuan)
	{
		case 43:
			sum = (double)data1 + data2;
			printf("%d%c%d=%.f", data1, op, data2, sum);
			break;
		case 45:
			sum = (double)data1 - data2;
			printf("%d%c%d=%.f", data1, op, data2, sum);
			break;
		case 42:
			sum = (double)data1 * data2;
			printf("%d%c%d=%.f", data1, op, data2, sum);
			break;
		default:
			if (data2 != 0)
			{
				switch (zhuanhuan)
				{
					case 47:
						sum = (double)data1 / data2;
						break;
					default:
						sum = data1 % data2;
				}
				printf("%d%c%d=%.f", data1, op, data2, sum);	
			}
			else
			{
				printf("\nError! chu shu wei 0.\n");
			}
	
	}
	
	return 0;
}