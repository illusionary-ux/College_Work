def is_q(n):
    pow = len(str(n))
    lst = list()
    for ch in str(n):
        lst.append(ch)
    tot = 0
    for i in lst:
        tot += int(i) ** pow
    if tot == int(n):
        return True
    else:
        return False

n = int(input())
for i in range(n):
    if is_q(i):
        print(i)