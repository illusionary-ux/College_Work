# include<stdio.h>
# include<stdlib.h>
#define MAXN 1000
typedef struct Stack
{
    int Data[MAXN];
    int Top;
} Stack;

int Judge(int n, int m, int seq[]);
;
int main(void)
{
    int n, m, k,result[MAXN];
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < k; i++)
    {
        int seq[MAXN];
        for (int  j = 0; j < n; j++)
        {
            scanf("%d", &seq[j]);
        }
        if (Judge(n, m, seq))
        {
            result[i] = 1;
        }
        else
        {
            result[i] = 0;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (result[i] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}

int Judge(int n, int m, int seq[])
{
    Stack S;
    S.Top = -1;
    int Current_Number = 1;

    for (int i = 0; i < n; i++)
    {
        // 当当前颜色不是我们想要装填的颜色
        while (S.Top != -1 && S.Data[S.Top] == Current_Number)
        {
            // 从栈中取出当前想要装填的颜色
            S.Top--;
            Current_Number++;
        }

        // 如果当前箱子颜色不是需要的颜色
        if (seq[i] != Current_Number)
        {
            // 将箱子压入临时货架（栈）
            if (S.Top < m - 1)
            {
                S.Data[++S.Top] = seq[i];
            }
            else
            {
                // 如果栈已经满了，无法再码放箱子
                return 0; // 返回 NO
            }
        }
        else
        {
            // 如果当前箱子正好是需要的颜色，直接装填
            Current_Number++;
        }
    }

    // 继续检查栈中的箱子是否可以顺序装填
    while (S.Top != -1 && S.Data[S.Top] == Current_Number)
    {
        S.Top--;
        Current_Number++;
    }

    // 判断是否顺利装填完所有颜色
    return Current_Number == n + 1;
}