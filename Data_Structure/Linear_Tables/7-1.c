# include<stdio.h>
int main()
{
    int num[100000];
    int k;
    scanf("%d",&k);
    int tmp,cnt=0;
    scanf("%d",&tmp);
    while (tmp>=0)
    {
        num[cnt++] = tmp;
        scanf("%d",&tmp);
    }
    if (k < 0 || k > cnt)
    {
        printf("NULL\n");
        return 0;
    }
    printf("%d\n",num[cnt-k]);
    return 0;
}