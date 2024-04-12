#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    double avg = 0;
    for (int i = 1; i < n - 1; i++)
    {
        avg += arr[i];
    }
    avg /= n - 2;
    printf("%.2lf", avg);
    return 0;
}