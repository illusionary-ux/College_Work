#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    double s,a, b, c, p;

    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf", s);
    return 0;
}