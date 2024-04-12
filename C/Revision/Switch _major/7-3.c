#include<stdio.h>

int main(void)
{
	int num1[20], num2[20], tot1, tot2, i, j;
	int num3[40], tot3 = 0;
	
	scanf("%d", &tot1);
	for (i = 0; i < tot1; i++)
	{
		scanf("%d", &num1[i]);
	}
	scanf("%d", &tot2);
	for (i = 0; i < tot2; i++)
	{
		scanf("%d", &num2[i]);
	}
	
	
	for (i = 0; i < tot1; i++)
	{
		int flag = 0; 
		for(j = 0; j < tot2; j++)
		{
			if(num1[i] == num2[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			num3[tot3] = num1[i];
			tot3++;
		}
	}
	for (i = 0; i < tot2; i++)
	{
		int flag = 0; 
		for(j = 0; j < tot1; j++)
		{
			if(num2[i] == num1[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			num3[tot3] = num2[i];
			tot3++;
		}
	}
	
	
	for (i = 0; i < tot3; i++)
	{
		int flag = 1;
		for (j = 0; j < i; j++)
		{
			if (num3[i]==num3[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1) 
		{
        	if (i > 0) 
			{
            	printf(" ");  // 在数字之间添加空格，而不是在每个数字后面
        	}
        printf("%d", num3[i]);
    	}
	}

	return 0;
}
