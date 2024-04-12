#include<stdio.h>

int main(void)
{
	int num[10], i, flag = 0, tot = 1;
	int aim, tem;
	
	scanf("%d", &num[1]);
	for (i = 1; tot < 10; i++)
	{
		scanf("%d", &tem);
		if (tem > num[tot - 1])
		{
			num[tot] = tem;
			tot++;
		}
		
	}
	scanf("%d", &aim);
	for (i = 0; i < 10; i++)
	{
		if(num[i] == aim)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%d", i+1);
	}
	else
	{
		printf("Not Find!");
	}
	return 0;
}
