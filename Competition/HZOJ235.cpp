#include <bits/stdc++.h>
using namespace std;
void f(int i, int j, int n);
void print_one_resule(int n);
int arr[10];
int main(void)
{
    int n;
    cin >> n;
    f(0, 1, n);
    return 0;
}
void f(int i, int j, int n) // i是第i个位置，k是第i位最小填入的数字
{
    if (j > n)
    {
        return;
    }

    for (int k = j; k <= n; k++)
    {
        arr[i] = k;
        print_one_resule(i);
        f(i + 1, k + 1, n);
    }
}
void print_one_resule(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i)
        {
            cout << " ";
        }
        cout << arr[i];
    }
    cout << endl;
    return;
}