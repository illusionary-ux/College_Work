import math
n = int(input())
s = 0.0
for i in range(1, n+1, 1):
    s += pow (-1, i + 1) * i/(2 * i - 1)
print("%.3f" % s)