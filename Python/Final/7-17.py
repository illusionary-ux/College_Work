from math import sqrt
def is_prime(n):
    if n < 2:
        return False
    for i in range(2,int(sqrt(n))+1):
        if n % i == 0:
            return False
    return True
def is_huiwen(n):
    return str(n) == str(n)[::-1]

def is_anti_prime(n):
    if is_huiwen(n):
        return False
    reverse_n = int(str(n)[::-1])
    return is_prime(reverse_n)


n = int(input())

for i in range(2,n+1):
    if is_prime(i) and is_anti_prime(i):
        print(i)
