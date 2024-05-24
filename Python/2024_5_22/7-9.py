n = int(input())
l = []
count = 0
for i in range(n):
    l.append(list(map(int, input().split())))
for i in range(n):
    a = max(l[i])
    b = min(l[k][l[i].index(a)] for k in range(n))
    if b == a:
        count += l[i].count(a)
print(f'{count}')