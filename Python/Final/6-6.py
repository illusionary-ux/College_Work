def is_prime(a):
    if a < 2:
        return "No"
    for i in range(2, a):
        if a % i == 0:
            return "No"
    return "Yes"

n = int(input())
print(is_prime(n))