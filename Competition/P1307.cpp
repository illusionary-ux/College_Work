#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    int i;
    cin >> str;
    if (str[0] == '0' && str.size() == 1)
    {
        cout << 0;
        return 0;
    }

    int flag = 0;
    if (str[0] == '-')
    {
        flag = 1;
        reverse(str.begin() + 1, str.end());
    }
    else
    {
        reverse(str.begin(), str.end());
    }
    if (flag)
    {
        i = 1;
        while (str[i] == '0')
        {
            i++;
        }
    }
    else
    {
        i = 0;
        while (str[i] == '0')
        {
            i++;
        }
    }

    if (flag)
    {
        cout << "-";
        for (; i < str.size(); i++)
        {
            cout << str[i];
        }
    }
    else
    {
        for (; i < str.size(); i++)
        {
            cout << str[i];
        }
    }

    return 0;
}