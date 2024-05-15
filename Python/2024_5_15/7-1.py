list1 = list(map(int, input().split()))
avg = sum(list1) / len(list1)
for i in list1:
    if i > avg:
        print(i, end=' ')