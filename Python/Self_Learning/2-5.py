n = int(input())
s = 0.0
for i in range(1, n+1, 1):
    s += 1/(2 * i - 1)
print("sum = %.6f" % s)