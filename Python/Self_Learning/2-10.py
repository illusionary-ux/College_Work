lower, upper = [int (x) for x in input().split(" ")]
if lower > upper or upper > 100:
    print("Invalid.")
else:
    print("fahr celsius")
    tmp = lower
    while(tmp <= upper):
        print("%d%6.1f" % (tmp, (tmp - 32) / 1.8))
        tmp += 2