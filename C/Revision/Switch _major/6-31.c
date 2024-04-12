
#include <stdio.h>
#define N 5
int Min(int *p, int n,int *pos );

int main()
{
    int a[10],i,min,min_pos;
    int *pa=a;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    min=Min(pa,N,&min_pos);
    printf("min=%d,min_pos=%d",min,min_pos);
    return 0;
}

/* 请在这里填写答案 */

int Min(int a[], int n,int *pos )
{
	int i, min;
	min = a[0];
	*pos = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			*pos = i; 
		} 
	}
	return min;
}

