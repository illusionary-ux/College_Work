s1 = input()
a, b = input().split()

for i in range(len(s1) -1,-1,-1):
    if s1[i] == a:
        print(f"{i} {a}")
    elif s1[i] == b:
        print(f"{i} {b}")