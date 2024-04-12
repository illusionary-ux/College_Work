#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */

void move(int array[], int n, int m);

/* User Code End(考生添加代码结束) */

int main(void)
{
	int *number, n, m, i;

	printf("the total numbers is: ");
	scanf("%d", &n);
	printf("back m: ");
	scanf("%d", &m);

	number = (int *)malloc(n * sizeof(int));
	if (NULL == number)
	{
		puts("memory allocation failure!");
		exit(1);
	}

	printf("input %d integers: ", n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &number[i]);
	}
	
	move(number, n, m);

	printf("\n     after move %d: ", m);
	for (i=0; i<n; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n");

	free(number);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数move，行数不限) */
void move(int array[], int n, int m)
{
	int i, j, *pm;

	pm = (int *)malloc(m * sizeof(int)); //调用malloc函数申请内存，可以存放m个int型的数据

	/* 将指针变量num所指向内存中的最后m个数移动到指针变量pm所指向的内存中 */
	for (i=n-m, j=0; i<=n-1; i++, j++) 
	{
		pm[j] = array[i];
	}
	/* 将指针变量num所指向内存中的前n-m个数移动到该内存的末尾，空出最前面的m个位置*/
	for (i=n-m-1, j=n-1; i>=0; i--, j--)
	{
		array[j] = array[i];
	}
	/* 将指针变量pm所指向内存中的m个数移动到指针变量num所指向内存的最前面m个位置 */
	for (i=0; i<m; i++)
	{
		array[i] = pm[i];
	}
	free(pm);
}


