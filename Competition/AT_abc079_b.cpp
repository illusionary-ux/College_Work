#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int l, pos = 2;
    cin >> l;
    std::vector<long long> arr = {2, 1};
    while (l >= pos)
    {
        long long tmp;
        tmp = arr[pos - 1] + arr[pos - 2];
        arr.push_back(tmp);
        pos += 1;
    }
    cout << arr[l];
    return 0;
}