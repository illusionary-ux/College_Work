#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num, a[4] = {0}, sum = 0, i;
    cin >> num;
    if(num % 2 == 0)
    {
        sum++;
    }
    if(num > 4 && num <=12)
    {
        sum++;
    }
    if (sum == 0)
    {
        a[3] = 1;
    }
    if (sum == 1)
    {
        a[1] = 1;
        a[2] = 1;
    }
    if(sum == 2)
    {
        a[0] = 1;
        a[1] = 1;
    }
    for (i = 0; i < 4; i++)
    {
        cout << a[i];
        if(i != 3)
        {
            cout << " ";
        }
    }
        return 0;
}
/*用满足条件的数量来进行判断*/