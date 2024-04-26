#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, k, i, tot1 = 0, tot2 = 0;
    double s1 = 0, s2 = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            s1 += i;
            tot1++;
        }
        else
        {
            s2 += i;
            tot2++;
        }
    }
    if (tot1 == 0)
    {
        s1 = 0;
    }else{
        s1 /= tot1;
    }
    if(tot2 == 0)
    {
        s2 = 0;
    }
    else{
        s2 /= tot2;
    }

    printf("%.1lf %.1lf", s1, s2);
}