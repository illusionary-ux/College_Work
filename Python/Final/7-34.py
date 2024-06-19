from math import pow
a,b,n = map(float,input().split())
print(f"{a * pow((1+b),n):+>10.2f}")