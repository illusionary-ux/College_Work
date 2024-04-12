#include<stdio.h>

int main(void)
{
	int data1, data2;
	char op;
	
	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &data1, &op, &data2);
	switch (op)
	{
		case '+':
			printf("%d+%d=%.0f\n", data1, data2, (double)data1 + data2);
			break;
		case '-':
			printf("%d-%d=%.0f\n", data1, data2, (double)data1 - data2);
			break;
		case '*':
			printf("%d*%d=%.0f\n", data1, data2, (double)data1 * data2);
			break;
		case '/':
			if (data2 != 0)
			{
				printf("%d/%d=%d\n", data1, data2, data1 / data2);
			}
			else
			{
				printf("Error! chu shu wei 0.\n");
			}
			break;
		case '%':
			if (data2 != 0)
			{
				printf("%d%%%d=%d\n", data1, data2, data1 % data2);
			}
			else
			{
				printf("Error! chu shu wei 0.\n");
			}
			break;
		default:
			printf("ÔËËã·û´íÎó£¡\n");
	}
	
	return 0;
}