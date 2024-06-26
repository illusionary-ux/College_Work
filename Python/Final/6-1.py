def is_prime(a):
    if a < 2:
        return False
    for i in range(2, a):
        if a % i == 0:
            return False
    return True
def prime_sum(m, n):
    sum = 0
    for i in range(m, n+1):
        if is_prime(i):
            sum+=i
    return sum
m, n = input().split()
m = int(m)
n = int(n)
print(prime_sum(m, n))