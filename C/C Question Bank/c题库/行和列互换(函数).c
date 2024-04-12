/*将一个二维数组行和列的元素互换,用函数实现*/
#include <stdio.h>

void fun(int a[][3],int b[][2]);

int main(void)
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2],i,j;

  	printf("array a:\n");
  	for(i=0;i<2;i++)
  	{
		for(j=0;j<3;j++)
		{
	 		printf("%5d",a[i][j]);
		}
		printf("\n");
  	}
	fun(a,b);
  	printf("array b is:\n");
  	for(i=0;i<3;i++)
  	{
      	for(j=0;j<2;j++)
		{
	  		printf("%5d",b[i][j]);
		}
      	printf("\n");
  	}
	return 0;
}

void fun(int a[][3],int b[][2])
{
	int i, j;
	for(i=0;i<2;i++)
  	{
      	for(j=0;j<3;j++)
      	{
	 		b[j][i]=a[i][j];
      	}
  	}
}