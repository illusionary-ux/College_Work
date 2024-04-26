#include<iostream>
using namespace std;
int main(void)
{
    float tot;
    int num;
    cin >> tot >> num;
    printf("%.3f\n%d", tot / num, num * 2);
    return 0;
}