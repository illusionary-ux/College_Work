#include <bits/stdc++.h>
using namespace std;
long long int f(int n)
{
    if (n <= 3)
    {
        return n;
    }
    else
    {
        return f(n - 1) + f(n - 2);
    }
}
int main(void)
{
    long long n;
    cin >> n;
    if (n == 0)
    {
        n += 1;
    }
    printf("%ld", f(n));
    return 0;
}
/*#include<iostream>//文件头
#include<cstdio>//文件头
#include<cmath>//文件头
using namespace std;
int n,ans;//定义
int a[1000100]; //定义
int main()
{
    cin>>n;//读入
    if(n==0){cout<<1<<endl;return 0;}//如果等于0，直接输出1，结束。
    a[1]=1;//1位置=1
    a[2]=2;//2位置=2
    for(int i=3;i<=n;i++)//规定了前两个，要从第三个开始
    {
        a[i]=a[i-1]+a[i-2];//当前等于前两个数的和
    }
    cout<<a[n]<<endl;//输出N的位置的数
    return 0;
}*/