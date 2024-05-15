n = int(input())
m = 0
for i in range(n):
    s = input()
    s1 = s.strip()#去掉两边空格
    l = len(s1)
    if m<l:
        m=l
print('length=%d'%m)