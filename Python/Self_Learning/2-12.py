import math
a, b, c = [int (x) for x in input().split(" ")]
if a + b > c and b + c > a and a + c > b:
    c1 = a + b + c
    p = c1 / 2
    s = math.sqrt(p * (p - a) * (p - b) * (p - c))
    print("area = %.2f; perimeter = %.2f" % (s, c1))
else:
    print("These sides do not correspond to a valid triangle")
