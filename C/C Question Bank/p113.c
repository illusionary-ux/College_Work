#include <stdio.h>

int main(void)
{
	int benjin, cunqi;
	double lixi;

	printf("Please input benjin, cunqi:");
	scanf("%d,%d", &benjin, &cunqi); //输入存钱的本金和存期

	/*根据存期计算相应的利息*/
	switch (cunqi)
	{
		case 1:
			lixi = (double)benjin * 3.15 / 100;
			printf("lixi = %.2f yuan\n", lixi);
			break;
		case 2:
			lixi = (double)benjin * 3.63 / 100 * 2;
			printf("lixi = %.2f yuan\n", lixi);
			break;
		case 3:
			lixi = (double)benjin * 4.02 / 100 * 3;
			printf("lixi = %.2f yuan\n", lixi);
			break;
		case 5:
			lixi = (double)benjin * 4.69 / 100 * 5;
			printf("lixi = %.2f yuan\n", lixi);
			break;
		case 8:
			lixi = (double)benjin * 5.36 / 100 * 8;
			printf("lixi = %.2f yuan\n", lixi);
			break;
		default: 
			printf("cunqi error!\n");
	}	

	return 0;
}