#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, tmp;
    cin >> n;
    vector<int> arr;
    arr.push_back(n);
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            tmp = n * 3 + 1;
            n = tmp;
        }
        else
        {
            tmp = n / 2;
            n = tmp;
        }
        arr.push_back(tmp);
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i];
        if (i)
        {
            cout << " ";
        }
    }

    return 0;
}