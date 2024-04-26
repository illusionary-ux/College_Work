#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int i, n, t, cnt = 0;
    cin >> n;
    for (i = 1;n > 0; i++)
    {
        printf("%02d", i);
        cnt++;
        if(cnt==n)
        {
            printf("\n");
            cnt = 0;
            n--;
        }
    }
    return 0;
}