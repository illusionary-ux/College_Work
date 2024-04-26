#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num[3], i, j, tmp;
    char ch[3];
    for (i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < 3; i++)
    {
        cin >> ch[i];
    }
    sort(num, num + 3);
    cout << num[ch[0] - 'A'] << " " << num[ch[1] - 'A'] << " " << num[ch[2] - 'A'];
    return 0;
}