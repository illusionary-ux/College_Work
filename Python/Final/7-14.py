a,b = map(int, input().split())
cnt = 0
for i in range(a,b+1):
    if i % 3 == 0 and i % 5 == 0 and i % 7 == 0:
        cnt+=1
print(cnt)