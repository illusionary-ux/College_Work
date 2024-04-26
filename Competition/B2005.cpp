#include<iostream>
using namespace std;
int main(void)
{
    char ch;
    cin >> ch;
    printf("  %c  \n", ch);
    printf(" %c%c%c\n", ch, ch, ch);
    printf("%c%c%c%c%c", ch, ch, ch, ch, ch, ch);
    return 0;
}