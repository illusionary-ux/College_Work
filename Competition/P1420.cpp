#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, cnt = 1, now = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] == 1)
        {
            cnt++;
        }
        else
        {

            now = max(now, cnt);
            cnt = 1;
        }
    }

    now = max(now, cnt);

    cout << now;
    return 0;
}