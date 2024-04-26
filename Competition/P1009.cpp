#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double s = 1, tmp = 1;
    int i, n;
    cin >> n;
    for (i = 2; i <= n;i++)
    {
        tmp *= i;
        s += tmp;
    }
    cout << s;
    return 0;
}