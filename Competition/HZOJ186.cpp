
/*#include <bits/stdc++.h>
using namespace std;
int f(int num[], int n);
int main(void)
{
    int n, num[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("%d", f(num, n));
    return 0;
}
int f(int num[], int n)
{
    int cnt = 0, pos = 0;
    while (pos < n)
    {
        pos += num[pos];
        cnt++;
    }
    return cnt;
}*/
#include <bits/stdc++.h>
using namespace std;
int f(int i, std::vector<int> &arr, int n);
int main(void)
{
    int n, a;
    cin >> n;
    std::vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << f(0, arr, n);
    return 0;
}
int f(int i, std::vector<int> &arr, int n)
{
    if (i >= n)
    {
        return 0;
    }
    return f(i + arr[i], arr, n) + 1;
}