import math
m , n = [int (x) for x in input().split()]
s = 0.0
for i in range(m , n + 1, 1):
    s += pow(i, 2)
    s += 1/i
print("sum = %.6f" % s)