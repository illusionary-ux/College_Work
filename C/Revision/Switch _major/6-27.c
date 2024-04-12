#include <stdio.h>
#include <stdlib.h>
typedef struct student{
	char name[10],id[10];
	int gender;
	int age;
	double scored;
} ST;
void output(ST *d,FILE *fout){//测试程序，输出到文件调用此函数完成
	if(d==NULL) {printf("null\n");return;}
	fprintf(fout,"%s,%s,%d,%d,%4.2f\n",d->name,d->id,d->gender,d->age,d->scored);
}

void fun(FILE *fin,FILE *fout)
{
	
}//<--需要完成的函数（包括读入字符串，转换成对应的结构体，并利用函数（output（））输出到指定文件中，输入输出文件不用考虑
