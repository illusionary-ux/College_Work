# include<stdio.h>
int main(void)
{
    int sqlist[10000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sqlist[i]);
    }

    int cnt = 1,max_length = 1,tmp[100000],result[100000] = {0};
    tmp[0] = sqlist[0];    // 将第一个元素放入 tmp 数组
    result[0] = sqlist[0]; // 初始化 result 数组
    for (int i = 1; i < n; i++)
    {
        if (sqlist[i] > sqlist[i-1]) // 判断连续
        {
            tmp[cnt++] = sqlist[i]; // 记录连续的元素
        }
        else
        {
            cnt = 1;            // 重置计数器
            tmp[0] = sqlist[i]; // 开始新的子序列
        }

        // 更新最大连续序列
        if (cnt > max_length)
        {
            for (int k = 0; k < cnt; k++)
            {
                result[k] = tmp[k]; // 记录最长的连续子序列
            }
            max_length = cnt;
        }
    }

    for (int i = 0; i < max_length; i++)
    {
        printf("%d", result[i]);
        if (i < max_length-1)
        {
            printf(" ");
        }
        
    }
    
    return 0;
}