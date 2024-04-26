#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main(void)
{
    int a, b, c;
    cin >> a >> b;
    c = 6 - max(a, b) + 1;
    int tmp = gcd(c, 6);
    printf("%d/%d", c / tmp, 6 / tmp);
    return 0;
}