#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int tot, num[3], i, unit_price, quantity, min;
    cin >> tot;
    for (i = 0; i < 3; i++)
    {
        cin >> quantity >> unit_price;
        num[i] = ceil((float)tot / quantity) * unit_price;
    }
    min = num[0];
    for (i = 0; i < 3; i++)
    {
        if (num[i] <min)
        {
            min = num[i];
        }
    }
    cout << min;
    return 0;
}