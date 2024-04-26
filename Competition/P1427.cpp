#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    std::vector<int> arr;
    long long tmp;
    cin >> tmp;
    while (tmp != 0)
    {
        arr.push_back(tmp);
        cin >> tmp;
    }
    for (int i = static_cast<int>(arr.size()) - 1; i >= 0; i--)
    {
        cout << arr[i];
        if (i)
        {
            cout << " ";
        }
    }

    return 0;
}