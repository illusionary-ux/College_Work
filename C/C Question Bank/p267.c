#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a1, a2;

	if (argc != 3)
	{
		printf("    usage: P267  num1 num2\n");
		exit(22);
		
	}
	else 
	{
		a1 = atoi(argv[1]);
		a2 = atoi(argv[2]);
		if (a1 > a2)
		{
			printf("    由小到大：  %d  %d\n", a2, a1);
		}
		else 
		{
			printf("    由小到大：  %d  %d\n", a1, a2);

		}
	}

	return 0;






}