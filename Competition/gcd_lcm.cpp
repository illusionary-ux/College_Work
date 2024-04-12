#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b / gcd(a, b));
}
int main(void)
{
    int a, b;
    cin >> a >> b;
    printf("%d\n", gcd(a, b));
    cout << lcm(a, b);
    return 0;
}