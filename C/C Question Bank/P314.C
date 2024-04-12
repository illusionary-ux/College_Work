#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	
	char pinming[21]; //存放从文件读出的某商品品名
	char guige[11]; //存放从文件读出的某商品规格
	int shuliang; //存放从文件读出的某商品数量
	float danjia; //存放从文件读出的某商品单价
	int flag = 0; // flag值为0，表示没有找到商品，为1，表示找到商品
	char cxpm[21]; //该数组用来存放从键盘输入的要查询的商品名
	FILE *fp;

	printf("Please input shang pin pin ming:");
	scanf("%s", cxpm); //输入要查询的商品名
	
	printf("\ncha zhao qing kuang:\n");
	fp = fopen("sp.txt", "r"); //打开文本文件sp.txt
	
	/* 判断文件sp.dat是否被打开，fp等于NULL，则文件打不开，否则，文件被打开 */
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}
	
	while (fscanf(fp, "%s %s %f %d", pinming, guige, &danjia, &shuliang) == 4) //函数fscanf的作用：从文件sp.txt中读数据
	{
		/* 将从文件读出的商品名称与从键盘输入的待查询的商品名称比较，如二者相同，说明找到商品，输出该商品数据 */
		if (strcmp(pinming, cxpm) == 0) //如果函数strcmp的函数值为0，说明两个字符串相同
		{
			printf("%s,%s,%d,%.2f\n", pinming, guige, shuliang, danjia);
			flag = 1; //将标志变量的值置为1，说明已经找到要查询的商品
		}
		
	}
	/* 判断是否找到待查询的商品，如果flag的值为0，说明没有找到，则输出相应信息 */
	if (0 == flag)
	{
		printf("mei you shang pin :%s", cxpm);
	}
	fclose(fp); //关闭文件

	return 0;
}