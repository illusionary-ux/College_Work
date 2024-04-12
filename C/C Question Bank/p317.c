#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch;
	char sfilename[100], dfilename[100];
	FILE *fp1, *fp2;

	printf("Please input sourceFilename: ");
	gets(sfilename); //输入源文件名
	printf("Please input destinationFilename: ");
	gets(dfilename); //输入目标文件名

	fp1 = fopen(sfilename, "rb"); //打开源文件
	/* 判断源文件是否被打开，如果fp1等于NULL，则文件打不开，输出相应信息并返回2作为main函数的返回值，
		否则，文件被打开*/
	if (fp1 == NULL)
	{
		printf("\nsource File (%s) Open Error!\n", sfilename);
		exit(2); //结束程序，并返回退出码2
	}
	fp2 = fopen(dfilename, "wb"); //打开目标文件
	/* 判断目标文件是否被打开，如果fp2等于NULL，则文件打不开，输出相应信息并返回3作为main函数的返回值，
		否则，文件被打开*/
	if (fp2 == NULL)
	{
		printf("\ndestination File (%s) Create Error!\n", dfilename);
		fclose(fp1); //关闭源文件
		exit(3); //结束程序，并返回退出码3
	}
	/* 从源文件中读出数据并写到目标文件中 */
	ch = fgetc(fp1); //从源文件中读一个字符赋给变量ch
	while (feof(fp1) == 0) //使用feof函数判断源文件是否结束，文件结束feof的函数值为非零的数，文件没有结束函数值为0
	{
		
		if (fputc(ch, fp2) == EOF) //将ch中的字符写到目标文件中；如果fputc的函数值为EOF，说明写操作出错
		{
			printf("\nwriting destination File (%s) Error!\n", dfilename);
			fclose(fp1); //关闭源文件
			fclose(fp2); //关闭目标文件
			exit(4); //结束程序，并返回退出码4
		}
		ch = fgetc(fp1); //从源文件中读一个字符赋给变量ch
		
	}
	printf("\ncopy %s to %s successed!\n", sfilename, dfilename); //输出复制成功的信息
	fclose(fp1); //关闭源文件
	fclose(fp2); //关闭目标文件
	return 0; ////程序正常结束，并返回退出码0
}
