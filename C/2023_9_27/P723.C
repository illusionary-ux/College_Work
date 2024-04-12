#include<stdio.h>
#include<math.h>

int main(void)
{
	double l1, l2, l3, area, p;

	printf("please input triange sides: ");
	scanf("%lf, %lf, %lf", &l1, &l2, &l3);
	if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)
	{
		p = (l1 + l2 + l3) / 2;
		area = sqrt(p * (p - l1) * (p - l2) * (p - l3));
		printf("\narea=%.2lf\n", area);
	}
	else
	{
		printf("\ndata error\n");
	}
	
	return 0;

}