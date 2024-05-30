import math

def funcos(a, b):
    i = j = 0
    sum = 0
    tmp = pow(-1, j) * pow(b, i) / math.factorial(i)
    while abs(tmp) > a:
        sum += tmp
        i += 2
        j += 1
        tmp = pow(-1, j) * pow(b, i) / math.factorial(i)
    return sum

eps,x=input().split()
eps,x=float(eps),float(x)
value=funcos(eps,x )
print("cos({0}) = {1:.4f}".format(x,value))