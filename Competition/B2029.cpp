#include<bits/stdc++.h>
#define pi 3.14
using namespace std;
int main(void)
{
    int h, r, num;
    double v;
    cin >> h >> r;
    v = pi * r * r * h;
    num = ceil(20000/v);
    cout << num;
    return 0;
}