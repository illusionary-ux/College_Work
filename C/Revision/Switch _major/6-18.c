 
#include<stdio.h>

void Creat(int a[][5],int m);
void Output(int a[][5]);
 

int main(void)
{
    int num[5][5],m;
    scanf("%d", &m);
    Creat(num,m); 
    
    Output(num);
    
    return 0;
}

/* ???????? */
 
void Creat (int a[][5], int m )
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = m + i + j;
		}
	}
}
void Output( int a[][5] )
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
