n = int(input())
c1 = c2 = c3 = 0
for i in range(n):
    dic = eval(input())
    for j in dic:
        c1 +=  1
        for k in dic[j]:
            c2+=1
            c3+=dic[j][k]
print(c1,c2,c3)