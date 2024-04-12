#include <stdio.h>

int main(void)
{
	int in[20][20], in1, in2, in3, sum = 0;
	
	printf("Please input m: ");
	scanf("%d", &in1);
	printf("Please input array:\n");
	for (in2 = 0; in2 < in1; in2++)
	{
		for (in3 = 0; in3 < in1; in3++)
		{
			scanf("%d", &in[in2][in3]);
		}
	}
	for (in2 = 0; in2 < in1; in2++)
	{
		sum = sum + in[in2][0] + in[in2][in1 - 1] + in[in2][2];
	}
	printf("\nSum = %d\n", sum);
	return 1;
}