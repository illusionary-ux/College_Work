from math import sqrt
a,b,c = map(int,input().split())
d = b * b - 4 * a * c
if d < 0:
    print(f"该方程式无根.")
elif d == 0:
    print(f"方程只有一个根: {(-b + sqrt(d))/(2 * a):.2f}.")
else:
    print(f"方程只有两个根: {(-b + sqrt(d))/(2 * a):.2f}, {(-b - sqrt(d))/(2 * a):.2f}.")