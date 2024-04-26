#include<iostream>
using namespace std;
int main(void)
{
    int xs, zhengshu, tmp, aim = 0;
    scanf("%d.%d", &zhengshu, &xs);
    while (zhengshu > 0)
    {
        aim = zhengshu % 10 + aim * 10;
        zhengshu /= 10;
    }
    printf("%d.%d", xs, aim);
    return 0;
}