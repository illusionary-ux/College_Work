#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp1, *fp2, *fp3;
	int x1, x2, tot = 1;
	char op;
	
	fp1 = fopen("Comp.txt", "r");
	fp2 = fopen("CompA.txt", "r");
	fp3 = fopen("CompB.txt","r");
	while (fscanf(fp1, "%d", &x1) == 1 && fscanf(fp2, "%c\n", &op) == 1 && fscanf(fp3, "%d", &x2) == 1)
	{
		if (op == '+')
		{
			printf("Line %03d:  %5d %c %-5d = %-6d\n", tot++, x1, op, x2, x1 + x2);//TODO
		}
		else
		{
			printf("Line %03d:  %5d %c %-5d = %-6d\n", tot++, x1, op, x2, x1 - x2);
		}
		
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
