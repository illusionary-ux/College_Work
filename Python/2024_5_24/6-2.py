def PrimeSum(m, n):
    sum = 0
    for i in range(m,n+1):
        if prime(i):
            sum += i
    return sum
def prime(p):
    if p == 1:
        return False
    for i in range(2,p):
        if p % i == 0:
            return False
    return True
m,n=input().split()
m=int(m)
n=int(n)
print(PrimeSum(m,n))