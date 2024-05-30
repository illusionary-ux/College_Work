import math
def polyvalue(lst,x):
    sum = 0
    for i in range(0,len(lst)):
        sum += lst[i] * math.pow(x, i)
    return sum

lst=eval(input())
y=float(input())
print("{:.1f}".format(polyvalue(lst,y)))