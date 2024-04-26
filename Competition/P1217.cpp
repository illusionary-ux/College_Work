#include <bits/stdc++.h>
using namespace std;
int isprime(int a)
{
    if (a % 2 == 0 || a == 1)
    {
        return 0;
    }
    int k = sqrt(a);
    for (int i = 2; i <= k; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
/*
vector<int> primes;  // 存储素数
bool isPrime[N + 1]; // 标记是否是素数

void eulerSieve(int n)
{
    for (int i = 2; i <= n; ++i)
        isPrime[i] = true;
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i); // i是素数
        }
        for (int j = 0; j < primes.size() && i * primes[j] <= n; ++j)
        {
            isPrime[i * primes[j]] = false; // 筛选
            if (i % primes[j] == 0)
                break; // 保证每个合数只被其最小的质因数筛选
        }
    }
}*/
int isHWS(int i /*, int num[]*/)
{
    /*int tmp = i, cnt = 0, flag = 1;
    while (tmp > 0)
    {
        num[cnt++] = tmp % 10;
        tmp /= 10;
    }
    for (int j = 0; j <= cnt / 2; j++)
    {
        if (num[j] != num[cnt - 1 - j])
        {
            flag = 0;
            break;
        }
    }
    return flag;*/
    int sum = 0;
    int k = i;
    while (i != 0)
    {
        sum = sum * 10 + i % 10;
        i /= 10;
    }
    if (sum == k) // 判断是否回文
        return 1;
    else
        return 0;
}
int main(void)
{
    int a, b /*, num[10]*/;
    cin >> a >> b;
    if (b >= 9989899)
    {
        b = 9989899;
    }

    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            if (isHWS(i /*, num*/))
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}