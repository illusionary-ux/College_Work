year = int(input())
if year % 400 == 0:
    flag = 1
elif year % 4 == 0 and year % 100 != 0:
    flag = 1
else:
    flag = 0
if flag:
    print("Yes")
else:
    print("No")