/*编写一程序P752.C实现以下功能
　　键盘输入m,n（约定：m和n均≤1000且为正整数），输出介于m和n（含m和n）中能被3整除且至少有位数字是5的所有整数。编程可用素材：printf("Input m, n: ")、printf("\nResult: ")。
　　程序的运行效果应类似地如图1和图2所示，图1中的100,200和图2中的195,15是从键盘输入的内容。
Input m, n: 100,200

Result: 105 135 150 153 156 159 165 195

图1 程序运行效果示例

Input m, n: 195,15

Result: 15 45 51 54 57 75 105 135 150 153 156 159 165 195

图2 程序运行效果示例*/
#include<stdio.h>

int main(void)
{
    int m, n, i, fenli, tmp, flag;

    printf("Input m, n: ");
    scanf("%d,%d", &m, &n);
    if (m > n)
    {
        tmp = m;
        m = n;
        n = tmp;
    }
    printf("\nResult: ");
    for(i = m; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            tmp = i;
            flag = 0;
            while(tmp > 0)
            {
                fenli = tmp % 10;
                if (fenli == 5)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    tmp /= 10;
                }
            }
            if (flag)
            {
                printf("%d ", i);
            }
        }
    }


    return 0;
}