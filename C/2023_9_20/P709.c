#include<stdio.h>
#include<math.h>

int main(void)
{
	float ft, ct;
	
	printf("Input the degree: ");
	scanf("%f", &ft);
	ct = (5*ft - 160) / 9;
	printf("\nF(%.2f)=C(%.2f)", ft, ct);
	return 0;
}
