lst = list(map(int,input().split(',')))
result = list()
for i in range(6,11):
    if i not in lst:
        result.append(i)
print(*result,sep=' ')