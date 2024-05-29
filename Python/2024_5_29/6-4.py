def fib(n):
    if n==0:
        return 1
    elif n==1:
        return 1
    else:
        return fib(n-1) + fib(n-2)
def PrintFN(m, n):
    lst = list()
    i = j = 0
    while (fib(i) < m):
        i+=1
    while(fib(j) < n):
        j+=1
    for k in range(i, j):
        lst.append(fib(k))
    return lst


m,n,i=input().split()
n=int(n)
m=int(m)
i=int(i)
b=fib(i)
print("fib({0}) = {1}".format(i,b))
fiblist=PrintFN(m,n)
print(len(fiblist))