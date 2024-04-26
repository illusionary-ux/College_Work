#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int day, cnt = 0, tot = 0, a = 1;
    cin >> day;
    for (int i = 1; i <= day; i++)
    {
        tot += a;
        cnt++;
        if (cnt == a)
        {
            cnt = 0;
            a++;
        }
    }
    cout << tot;
    return 0;
}