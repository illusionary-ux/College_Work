#include<stdio.h>
#include<string.h>

int main(void)
{
	int tem;
	FILE *fp;
	
	fp = fopen("Test.txt", "w");
	if (fp == NULL)
	{
		printf("\nCreate file error!\n");
		return 1;
	}
	printf("Input chars: ");
	tem = getchar();
	while (tem != '!')
	{
		if (tem >= 'a' && tem <= 'z')
		{
			tem -= 32;
		}
		if (fputc(tem, fp) != tem)
		{
			printf("\nWriting file error!\n");
			fclose(fp);
			return 2;
		}
		tem = getchar();
	}
	fclose(fp);

	return 0;
}
