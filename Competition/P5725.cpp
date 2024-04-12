#include <bits/stdc++.h>
using namespace std;
void print1(int a);
void print2(int a);
int main(void)
{
    int i;
    cin >> i;
    print1(i);
    cout << endl;
    print2(i);
    return 0;
}
void print1(int a)
{
    int cnt = 0;
    for (int i = 1; i <= a * a; i++)
    {
        printf("%02d", i);
        cnt++;
        if (cnt == a)
        {
            printf("\n");
            cnt = 0;
        }
    }
}
void print2(int a)
{
    int line = 1, flag = 0;
    for (int i = 1, cnt = 0; line <= a; i++)
    {
        if (flag == 0)
        {
            for (int j = 0; j < a - line; j++)
            {
                cout << "  ";
            }
            flag = 1;
        }

        printf("%02d", i);
        cnt++;
        if (cnt == line)
        {
            cout << "\n";
            cnt = 0;
            line++;
            flag = 0;
        }
    }
}