from math import pow , floor
m ,n = map(int, input().split())
sum = 0.0
for i in range(m,n+1):
    sum += pow(i,2) + 1 / i
print("sum ≈ {}".format(floor(sum)))