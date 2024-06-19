from math import sqrt
def is_prime(n):
    if n < 2:
        return False
    for i in range(2,int(sqrt(n))+1):
        if n % i == 0:
            return False
    return True
n = int(input())
tot = 0
for i in range(n+1):
    if is_prime(i):
        tot+=i
print(tot)