a, n = [int(x) for x in input().split()]
i = 1
s = 0
a = str(a)
while i <= n:
    s += int(a * i)
    i += 1
print(s)