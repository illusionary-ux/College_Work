#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int num2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, year;
    bool juge;
    cin >> year >> month;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 !=0))
    {
        juge = true;
    }
    else
    {
        juge = false;
    }
    if (juge)
    {
        cout << num2[month - 1];
    }
    else{
        cout << num1[month - 1];
    }
    return 0;
}