#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, x, j;
    cin >> n;
    for (x = 100; x >= 0; x--)
    {
        for (j = 1; j <= n; j++)
        {
            if ((7 * x + 21 * j) * 52 == n)
            {
                cout << x << "\n";
                cout << j;
                return 0;
            }
        }
    }

    return 0;
}