def factorial(n):
    result = 1
    for i in range(2,n+1):
        result *= i
    return result
def factorial_output(n):
    sum = 0
    tmp = list()
    for i in range(1,2*n,2):
        t1 = factorial(i)
        sum += t1
        tmp.append(f"{i}!")
    tmp_str = '+'.join(tmp)
    result = f"{tmp_str} = {sum}"
    return result
n = int(input())
print(factorial_output(n))


