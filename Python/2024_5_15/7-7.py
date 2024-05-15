n = int(input())
list1 = []
while n % 10 == 0:
    n = n // 10
while n > 0:
    list1.append(n % 10)
    n = n // 10
for i in list1:
    print(i,end = '')