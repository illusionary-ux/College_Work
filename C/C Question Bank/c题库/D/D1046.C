#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int ch;

	/*********Found************/
	fp = fopen("jsgc01.txt", "r");
	if (NULL == fp)
	{  
		printf( "Cannot open file!\n") ;
		exit(1) ;     
	}

	ch = fgetc(fp);
	/*********Found************/
	while (ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n");

	fclose(fp);
	return 0;
}
