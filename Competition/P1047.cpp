#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int l, m, u, v, cnt = 0;
    cin >> l >> m;
    vector<int> arr;
    arr.resize(l + 1, 1);
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        for (int j = u; j <= v; j++)
        {
            arr[j] = 0;
        }
    }
    for (int i = 0; i <= l; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}