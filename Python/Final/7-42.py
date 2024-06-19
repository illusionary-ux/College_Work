s = input()
lst = list()
for ch in s:
    if ch.isalnum() and ch not in lst:
        lst.append(ch.lower())
for i in lst:
    print(i,end="")