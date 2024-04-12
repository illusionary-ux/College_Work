#include <stdio.h>
int main(void)
{
	int i, m, sum, n, len, flag=0, j;
	scanf("%d%d", &m, &n);
	for (i=m;i<=n;i++)
	{
		int a[1000] = {0};
		for (j=1,len=0;j<i;j++)
		{
			if(i % j == 0)
			{
				a[len]=j;
				len++;
			}
		}
		for (j = 0, sum=0; j < len; j++)
		{
			sum += a[j];
		}
		if(sum==i)
		{
			printf("%d its factors are ", i);
			for (j=0;j<len;j++)
			{
				printf("%d", a[j]);
				if(j!=len-1){
					putchar(',');
				}
			}
			putchar('\n');
			flag=1;
		}
		
	}
	if(flag==0)
	{
		printf("Not Found！");
	}
	return 0;
}
