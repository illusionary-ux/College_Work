#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x, i, tmp, num[10] = {0};
    cin >> n >> x;
    for (i = 1; i <= n; i++)
    {
        int tmp = i;
        while (tmp > 0)
        {
            num[tmp % 10]++;
            tmp /= 10;
        }
    }
    cout << num[x];
    return 0;
}