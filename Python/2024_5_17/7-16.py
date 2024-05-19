list1 = list(input())
list2 = list(input())
cnt = 0
for c in list1:
    if c in list2:
        cnt+=1
print(cnt)