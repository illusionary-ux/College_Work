#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	double num2, num3; 
	int num1;


	if (argc != 4)
	{
		printf("    usage: P119  num1 num2 num3\n");
		exit(8);  
	}
	num1 = atoi(argv[1]); 
	num2 = atof(argv[2]); 
	num3 = atof(argv[3]);
	
	printf("    %d + (%.3f + %.3f) / 2   =  %.3f\n", num1, num2, num3, num1 + (num2 + num3) / 2);

	return 0; 
}
