from math import *
x = float(input())
fx = sin(pi / 180 * 35) + (pow(e, x) - 15 * x)/(sqrt(pow(x,4) + 1)) - log(7 * x )
print("f({})={:.3f}".format(x,fx))