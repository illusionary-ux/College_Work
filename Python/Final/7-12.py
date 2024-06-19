def gcd(a,b):
    if b == 0:
        return a
    return gcd(b,a%b)
def lcm(a,b):
    return a * b / gcd(a,b)

a,b = map(int,input().split())
print(f"GCD: {gcd(a,b)}, LCM: {int(lcm(a,b))}")
