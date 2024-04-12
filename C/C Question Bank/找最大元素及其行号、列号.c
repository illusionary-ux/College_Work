/*在一个3x4的矩阵中，求其最大元素的值，和其所在的行号、列号*/
#include<stdio.h>

int main(void)
{
	int i,j,row=0,colum=0,max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};

	max=a[0][0];
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
	}
	printf("max=%d,row=%d,colum=%d\n",max,row,colum);
	return 0;
}