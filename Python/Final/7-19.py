def gcd(a,b):
    if b == 0:
        return a
    return gcd(b , a%b)
a,b = map(int,input().split())
print(f"{a} 与 {b} 的最大公约数为: {gcd(a,b)}")