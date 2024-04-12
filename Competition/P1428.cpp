#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, cnt;
    cin >> n;
    vector<int> arr, ans;
    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < i; j++)
        {

            if (arr[j] < arr[i])
            {
                cnt++;
            }
        }
        ans.push_back(cnt);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i != ans.size() - 1)
        {
            cout << " ";
        }
    }

    return 0;
}