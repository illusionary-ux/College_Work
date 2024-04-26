#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num[3], i, tmp, j;
    for (i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (num[i] > num[j])
            {
                tmp = num[j];
                num[j] = num[i];
                num[i] = tmp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << num[i];
        if(i != 2)
        {
            printf(" ");
        }
    }
        return 0;
}