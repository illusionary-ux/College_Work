from math import factorial
def f(x,n):
    tot = 0
    for i in range(1,2*n,2):
        tot += x**i/factorial(i)
    return tot

x, n = input().split()
x = float(x)
n = int(n)
print(f'f({x}, {n}) = {f(x, n)}')