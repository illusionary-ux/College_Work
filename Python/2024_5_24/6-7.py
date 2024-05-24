def Avg(lst):
    blst = []
    for i in range(len(lst)):
        fin = 0
        avg = 0
 
        for j in range(len(lst[i])):
            fin = fin + lst[i][j]
        avg = fin / len(lst[i])
        blst.append(avg)
    return blst

lst=eval(input())
result=Avg(lst)
for value in result:
    print("{:.1f}".format(value),end=" ")