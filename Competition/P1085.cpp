#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int i, max, maxi, num[7], tmp1, tmp2;
    bool flag = false;
    for (i = 0; i < 7; i++)
    {
        cin >> tmp1 >> tmp2;
        num[i] = tmp1 + tmp2;
    }
    max = num[0];
    maxi = 0;
    for (i = 0; i < 7; i++)
    {
        if (num[i] > 8)
        {
            flag = true;
        }
        if (num[i] > max)
        {
            max = num[i];
            maxi = i;
        }
    }
    if (!flag)
    {
        cout << "0";
        return 0;
    }
    else{
        for (i = 0; i < 7; i++)
        {
            if(num[i] == max)
            {
                cout << i + 1;
                break;
            }
        }
    }
        return 0;
}