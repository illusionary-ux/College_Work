#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    double s, v;
    int n, t, hour, minute;
    cin >> s >> v;
    n = 8 * 60 + 24 * 60;//总时间
    t = ceil(s / v) + 10;//总花费时间，向上取整
    n -= t; // 剩余时间
    if(n >= 24 *60)//剩余时间超过一天，说明用时8小时之内
    {
        n -= 24 * 60;
    }
    hour = n / 60;//直接用剩余时间算出出发时间
    minute = n % 60;
    if(hour<10)
    {
        if(minute < 10)
        {
            printf("0%d:0%d", hour, minute);
        }
        else
        {
            printf("0%d:%d", hour, minute);
        }
    }
    else
    {
        if (minute < 0)
        {
            printf("%d:0%d", hour, minute);
        }
        else{
            printf("%d:%d", hour, minute);
        }
    }
    return 0;
}
/*整体思路：
转化成分钟来解决
重点在剩余时间（time remain)
*/