#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num[100], i, min, n;
    cin >> n;
    for (i = 0; i < n;i++)
    {
        cin >> num[i];
    }
    min = num[0];
    for (i = 1; i < n; i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    cout << min;
}