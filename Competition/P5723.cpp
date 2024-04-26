#include <bits/stdc++.h>
using namespace std;
int isprime(int a)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main(void)
{
    int l, cnt = 0, weg = 0;
    cin >> l;
    for (int i = 2; weg + i <= l; i++)
    {
        if (isprime(i))
        {
            weg += i;
            cnt++;
            cout << i << endl;
        }
    }
    cout << cnt;
    return 0;
}