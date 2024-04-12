#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    printf("%.2f", (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5));
    return 0;
}