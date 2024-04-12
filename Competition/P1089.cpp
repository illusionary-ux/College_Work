#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int num[12];
    int tot = 0, banking = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> num[i];
    }
    for (int i = 1; i <= 12; i++)
    {
        tot += 300;
        tot -= num[i - 1];
        if (tot < 0)
        {
            cout << "-" << i;
            return 0;
        }
        if (tot % 100 != 0)
        {
            banking += tot - (tot % 100);
            tot %= 100;
        }
    }
    cout << 1.2 * banking + tot;
    return 0;
}