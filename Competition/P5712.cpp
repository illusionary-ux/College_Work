#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num;
    cin >> num;
    if (num == 0 || num == 1)
    {
        printf("Today, I ate %d apple.", num);
    }
    else{
        printf("Today, I ate %d apples.", num);
    }
    return 0;
}