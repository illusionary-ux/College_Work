def get_Fibonacci(n):
    if n == 0 or n == 1:
        return n
    else:
        return get_Fibonacci(n-1)+get_Fibonacci(n-2)
n = int(input())
result = list()
i = 0
while get_Fibonacci(i) <= n:
    result.append(get_Fibonacci(i))
    i+=1
for num in result:
    print(num, end="   ")