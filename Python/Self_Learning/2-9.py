a, b, c = [int(x) for x in input().split(" ")]
if a > b:
    a, b = b, a  # 交换a和b
if a > c:
    a, c = c, a  # 交换a和c
if b > c:
    b, c = c, b  # 交换b和c
print("%d->%d->%d" % (a, b, c))