#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num[3], i;
    for (i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    sort(num, num + 3);
    for (i = 2; i <= sqrt(num[0]);i++)
    {
        if (num[0] % i == 0 && num[2] % i == 0)
        {
            num[0] /= i;
            num[2] /= i;
            i = 2;
        }
    }
    cout << num[0] << "/" << num[2];
    return 0;
}