 
#include<stdio.h>

#define M 10
#define N 4

void Input(float a[][N],int m);
float Sum(float a[][N],int m);
 

int main(void)
{
        float num[M][N],sum;
    
        int m;
        scanf("%d", &m);
        Input(num,m); 
    
        sum = Sum(num,m);
        printf("sum = %.2f\n", sum);
        return 0;
}

/* ???????? */
 
void Input (float a[][N], int m )
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
}
float Sum ( float a[][N], int m )
{
	int i, j;
	float sum = 0;
	for (i = 1; i < m - 1; i++)
	{
		for (j = 1; j < m - 1; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}
