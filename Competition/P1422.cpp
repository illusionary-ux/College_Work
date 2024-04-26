#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int tot;
    double money;
    cin >> tot;
    if (tot <= 150)
    {
        money = 0.4463 * tot;
    }
    else if(tot < 400)
    {
        money = 0.4463 * 150 + (tot - 150) * 0.4663;
    }
    else{
        money = 0.4463 * 150 + 250 * 0.4663 + (tot - 400) * 0.5663;
    }
    printf("%.1lf", money);
    return 0;
}