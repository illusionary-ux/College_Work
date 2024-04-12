#include <stdio.h>
void fileRW(FILE *fin,FILE *fout);
int main(){
	char fname[20];gets(fname);
	FILE *fpr=fopen(fname,"r");
	FILE *fpw=fopen("file2.txt","w");  
	fileRW(fpr,fpw);
	fclose(fpr);fclose(fpw);
	return 0;
}
/* 请在这里填写答案 */
void fileRW(FILE *fin,FILE *fout)
{
	int tem;
	fputc(, fout);
	tem = fgetc(fin);
	while(tem != EOF)
	{
		if(tem == '\t')
		{
			;
		}
		else
		{
			fputc(tem, fout);
		}
	}
}
