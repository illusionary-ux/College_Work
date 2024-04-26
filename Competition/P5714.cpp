#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double m, h, bmi;
    cin >> m >> h;
    bmi = m / h / h;
    if (bmi < 18.5)
    {
        cout << "Underweight";
    }
    else if(bmi < 24)
    {
        cout << "Normal";
    }
    else{
        printf("%g\n", bmi);//%g默认输出6位有效数字，可以用%.8g输出有效数字为8的浮点数
        cout << "Overweight";
    }
    return 0;
}