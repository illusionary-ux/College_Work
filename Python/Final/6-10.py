def get_fibonacci(n):
    if n == 0 or n == 1:
        return n
    else:
        return get_fibonacci(n-1)+get_fibonacci(n-2)
def count_fibonacci(m, n):
    cnt = 0
    i = 0
    while get_fibonacci(i) <= m:
        i += 1
    while get_fibonacci(i) < n:
        cnt += 1
        i+=1
    return cnt

m, n = map(int, input().split())
print(f'Number of Fibonacci in [{m}, {n}]: {count_fibonacci(m, n)}')