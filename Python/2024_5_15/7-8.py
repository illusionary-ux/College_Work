s1 = list(input())
s2 = list(input())
s1, s2 = sorted(s1), sorted(s2)
if s1 == s2:
    print("yes")
else:
    print("no")