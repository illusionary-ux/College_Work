#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main(void)
{
    int i, tmp = 0, j = 1;
    char str[14];
    bool flag = false;
    fgets(str, 14, stdin);
    for (i = 0; i < 12; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            tmp += j * (str[i] - '0');
            j++;
        }
    }
    tmp %= 11;
    if (tmp == 10)
    {
        tmp = 'X';
        flag = true;
    }
    if (tmp == str[12] - '0' || tmp == str[12])
    {
        cout << "Right";
    }
    else
    {
        for (i = 0; i < 12; i++)
        {
            cout << str[i];
        }
        if (!flag)
        {
            cout << tmp;
        }else{
            cout << 'X';
        }
    }
    return 0;
}