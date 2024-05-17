a = int(input())
b = bin(a)
cnt = 0
for i in range(len(b)):
    if b[i] == '1':
        cnt += 1
print(cnt)