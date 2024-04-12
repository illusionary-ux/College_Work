#include <bits/stdc++.h>
using namespace std;
int isprime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(void)
{
    int n, a;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = n / i;
            break;
        }
    }
    while (isprime(a) != 1)
    {
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                a = a / i;
                break;
            }
        }
    }
    cout << a;
    return 0;
}