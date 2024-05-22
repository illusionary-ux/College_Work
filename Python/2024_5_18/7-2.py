n = str(hex(int(input())))
num = input()
cnt = 0
for ch in n:
    if ch == num:
        cnt+=1
print(cnt)