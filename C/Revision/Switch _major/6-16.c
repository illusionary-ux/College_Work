#include<stdio.h>
int Input(int *p,int n);
int Search(int *p, int n, int num);

int main(void)
{
        int Arr[20],cnt=0, num, Pos;
         cnt = Input(Arr,20);
         scanf("%d", &num);    
    
         Pos = Search(Arr,cnt,num) ;  
        if (-1 == Pos)
        {
                printf("not Find!\n");
        }
        else
        {
                printf("%d\n", Pos);
        }

        return 0;
}
/* ???????? */

int Input(int arr[],int n)
{
	int tem, i, tot = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &tem);
		if (tem != -9999)
		{
			arr[tot++] = tem;
		}
		else
		{
			break;
		}
	}
	return tot;
}
int Search(int arr[], int n, int num)
{
	int flag = 0, i;
	for (i = 0; i < n; i++)
	{
		if(arr[i] == num)
		{
			flag = 1;
			return i;
		}
	}
	if (flag == 0)
	{
		return -1;
	}
}
