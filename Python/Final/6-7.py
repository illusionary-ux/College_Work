def is_perfect(n):
    cnt = 0
    for i in range(1,n):
        if n % i == 0:
            cnt+=i
    if cnt == n:
        return "Yes"
    else:
        return "No"

n = int(input())
print(is_perfect(n))