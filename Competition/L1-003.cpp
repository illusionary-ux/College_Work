#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    int num[10] = {0};
    char aim[1000];
    scanf("%s", aim);
    for (int i = 0; i < strlen(aim); i++)
    {
        num[aim[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > 0)
        {
            printf("%d:%d\n", i, num[i]);
        }
    }
    return 0;
}