#include <iostream>
using namespace std;
int f(int n);
int main(void)
{
    int n, sum = 0;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
int f(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (f(n - 1) + 1) * 2;
}