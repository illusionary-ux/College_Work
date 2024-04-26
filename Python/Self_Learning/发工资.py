import random
tot = 10000
for i in range(1,21,1):
    num = random.randint(1,10)
    if num < 5:
        print("%d %d no money" % (i, num))
        continue
    else:
        print("%d %d 1000 %d" % (i, num, tot -1000))
        tot -= 1000
    if (tot == 0):
        break