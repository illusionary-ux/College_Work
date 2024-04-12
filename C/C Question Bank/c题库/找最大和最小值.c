/*输入10个数，找出其中最大和最小值*/
#include<stdio.h>

int main(void)
{
	int i,a[10],max,min;

	for(i=0;i<10;i++)
    {
     	scanf("%d",&a[i]);
    }

 	max=min=a[0];
	for(i=1;i<10;i++)
    {
		if(max<a[i]) 
		{
			max=a[i];
		}
     	if(min>a[i])
		{
			min=a[i];
		}
    }
 	printf("Maximum value is %d\n",max);
 	printf("Minimum value is %d\n",min);
	return 0;
}