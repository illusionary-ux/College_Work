#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	int x1, x2, tot = 1;
	char op;
	
	fp = fopen("Comp.txt", "r");
	
	while (fscanf(fp, "%d %c %d", &x1, &op, &x2)!= EOF)
	{
		if (op == '+')
		{
			printf("Line %03d:  %5d + %-5d = %-6d\n", tot++, x1, x2, x1 + x2);
		}
		else
		{
			printf("Line %03d:  %5d - %-5d = %-6d\n", tot++, x1, x2, x1 - x2);
		}
		
	}
	fclose(fp);
	return 0;
}
