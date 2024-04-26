#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int i, x, n;
    long long tot = 0;
    cin >> x >> n;
    for (i = 0; i < n; i++)
    {
        if (x == 6 || x==7)
        {
            ;
        }
        else{
            tot++;
        }
        if (x == 7)
        {
            x = 1;
        }
        else{
            x++;
        }
    }
        cout << tot * 250;
    return 0;
}
/*模拟搜寻过程*/