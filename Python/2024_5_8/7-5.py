import math
n = int(input())
sum = 0.0
for i in range(1,n+1):
    sum += pow(-1,i + 1) * i/(2 * i - 1)
print("%.3f" % sum)