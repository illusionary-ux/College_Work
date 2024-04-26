#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, i;
    cin >> n;
    for (i = 1;;i++)
    {
        if(n == 1)
        {
            break;
        }
        n /= 2;
    }
    cout << i;
    return 0;
}