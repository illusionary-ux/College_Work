#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num, t1, t2;
    cin >> num;
    t1 = 5 * num;
    t2 = 11 + 3 * num;
    if(t1 > t2)
    {
        cout << "Luogu";
    }
    else{
        cout << "Local";
    }
    return 0;
}