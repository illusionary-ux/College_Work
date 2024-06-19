n = int(input())
for i in range(n+1):
    if str(i) == str(i)[::-1]:
        print(i)