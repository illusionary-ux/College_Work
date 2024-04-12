#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	int x1, x2;
	char op;
	
	fp = fopen("Comp.txt", "r");
	fscanf(fp, "%d %c %d", &x1, &op, &x2);
	if (op == '+')
	{
		printf("%d + %d = %d\n", x1, x2, x1 + x2);
	}
	else
	{
		printf("%d - %d = %d\n", x1, x2, x1 - x2);
	}
	fclose(fp);
	return 0;
}
