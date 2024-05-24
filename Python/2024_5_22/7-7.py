lst = eval(input())
new = list()
for x in lst:
    if x not in new:
        new.append(x)
print(*new,sep=' ')