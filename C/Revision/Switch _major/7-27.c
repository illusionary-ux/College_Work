#include<stdio.h>
#include<string.h>
struct book
{
	char name[31];
	double price;
}bok[10];

int main(void)
{
	int i, maxlie = 0, minlie = 0, n;
	double max, min;
	
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		gets(bok[i].name);
		
		scanf("%lf", &bok[i].price);
		getchar();
	}
	max = bok[0].price;
	min = bok[0].price;
	for (i = 0; i < n; i++)
	{
		if(bok[i].price > max)
		{
			max = bok[i].price;
			maxlie = i;
		}
		if(bok[i].price < min)
		{
			min = bok[i].price;
			minlie = i;
		}
	}
	printf("%.2lf, %s\n", bok[maxlie].price, bok[maxlie].name);
	printf("%.2lf, %s", bok[minlie].price, bok[minlie].name);
	return 0;
}
