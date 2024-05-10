a, n = input().split()
sum = 0
n = int(n)
for i in range(2, n+1, 2):
    sum += int(a*i)
print(sum)