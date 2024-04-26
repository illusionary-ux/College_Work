import math
n = int(input())
sum = 0
i = 0
while i < n:
    sum += 1 / (2 * i + 1)
    i += 1
print("sum ≈ %d" % (math.ceil(sum)))