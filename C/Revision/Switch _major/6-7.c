
#include <stdio.h>

int Count_Digit ( char *ptr,int *num );

int main()
{
    char str[80];
    int cnt,num;
    gets(str);
    cnt=Count_Digit(str,&num);
    printf("There are %d digits in the string,they are %s\n",cnt,str);
    printf("The  number of inversions is %d\n",num);
    return 0;
 }

/* 请在这里填写答案 */
int Count_Digit ( char *ptr,int *num )
{
	int i, x;
	
	x = 0;
	for (i=0; ptr[i]!='\0'; i++){
		if (ptr[i] >= '0' && ptr[i] <= '9'){
			ptr[x] = ptr[i];
			x++;
		}
	}
	ptr[x] = '\0';
	*num = 0;
	for (i=x-1; i>=0; i--){
		*num = (*num) * 10 + (ptr[i] - '0');
	}
	return x;
}
