def is_perfect(n):
    tot = 0
    for i in range(1,n):
        if n % i == 0:
            tot+=i
    if tot == n:
        return True
    else:
        return False
m,n = map(int,input().split())
for i in range(m,n+1):
    if is_perfect(i):
        print(i)