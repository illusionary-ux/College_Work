#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    float s, tot = 2, cnt = 1, step = 2;
    cin >> s;
    while (tot < s)
    {
        step *= 0.98;
        tot += step;
        cnt++;
    }
    cout << cnt;
    return 0;
}