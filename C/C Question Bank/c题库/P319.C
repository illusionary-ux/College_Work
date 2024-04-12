#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	
	char pinming[17]; //存放从文件读出的某商品品名
	char guige[12]; //存放从文件读出的某商品规格
	int shuliang = 0; //存放从文件读出的某商品数量
	float danjia; //存放从文件读出的某商品单价
	int flag = 0; // flag值为0，表示没有找到商品，为1，表示找到商品
	int pmpd, ggpd, slpd, djpd; //用来存放fread的函数值
	char cxpm[17]; //该数组用来存放从键盘输入的要查询的商品名
	FILE *fp;

	printf("Please input shang pin pin ming:");
	scanf("%s", cxpm); //输入要查询的商品名
	
	printf("\ncha zhao qing kuang:\n");
	fp = fopen("sp36.dat", "rb"); //打开二进制文件sp36.dat
	
	/* 判断文件sp36.dat是否被打开，fp等于NULL，则文件打不开，否则，文件被打开 */
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}
	/* 以下四条语句的功能：从文件sp36.dat中读数据 */
	pmpd = fread(pinming, 17, 1, fp); 
	ggpd = fread(guige, 12, 1, fp);
	slpd = fread(&shuliang, 3, 1, fp);
	djpd = fread(&danjia, sizeof(float), 1, fp);
	while (feof(fp) == 0) //
	{
		/* 如果以下条件为真，说明从文件中正确读出了数据 */
		if ((pmpd == 1) && (ggpd == 1) && (slpd == 1) && (djpd == 1))
		{/* 将从文件读出的商品名称与从键盘输入的待查询的商品名称比较，如二者相同，说明找到商品，输出该商品数据 */
			if (strcmp(pinming, cxpm) == 0) //如果函数strcmp的函数值为0，说明两个字符串相同
			{
				printf("%s,%s,%d,%.2f\n", pinming, guige, shuliang, danjia);
				flag = 1; //将标志变量的值置为1，说明已经找到要查询的商品
			}
		}

		/* 以下四条语句的功能：从文件sp36.dat中读数据 */
		pmpd = fread(pinming, 17, 1, fp); 
		ggpd = fread(guige, 12, 1, fp);
		slpd = fread(&shuliang, 3, 1, fp);
		djpd = fread(&danjia, sizeof(float), 1, fp);
	}
	/* 判断是否找到待查询的商品，如果flag的值为0，说明没有找到，则输出相应信息 */
	if (0 == flag)
	{
		printf("mei you shang pin :%s", cxpm);
	}
	fclose(fp); //关闭文件

	return 0;
}