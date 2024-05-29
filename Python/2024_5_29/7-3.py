def Fibonacci(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)
n = int(input())
if n > 20:
    print("为防止递归过度消耗系统资源，n最大为20")
else:
    for i in range(1, n+1):
        print(Fibonacci(i),end=' ')