lower, upper = map(int, input().split())
if lower > upper or lower < -20 or upper > 50:
    print("Invalid")
else:
    print("celsius    fahr")
    for i in range(lower, upper + 1, 2):
        print("%d%14.1f" % (i, i * 1.8 + 32))