#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a, b, c, tmp;
    cin >> a >> b >> c;
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a+b>c&&b+c>a&&c+a>b)
    {
        if (a * a + b * b == c * c)
        {
            cout << "Right triangle";
        }
        else if (a * a + b * b < c * c)
        {
            cout << "Obtuse triangle";
        }
        else{
            cout << "Acute triangle";
        }
        
        if(a == b||b==c||a==c)
        {
            cout << endl
                 << "Isosceles triangle";
        }
        if (a == b&&b== c&&a==c)
        {
            cout << endl
                 << "Equilateral triangle";
        }
    }
    else{
        cout << "Not triangle";
    }
    return 0;
}