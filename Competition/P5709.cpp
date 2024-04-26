#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int m, t, s, remain;
    cin >> m >> t >> s;
    if (t == 0)
    {
        cout << 0;
        return 0;
    }
    remain = m - ceil(s / (float)t);
    if (remain < 0)
    {
        cout << 0;
    }
    else
    {
        cout << remain;
    }
    return 0;
}