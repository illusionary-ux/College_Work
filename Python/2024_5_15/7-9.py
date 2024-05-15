s = input()
maxpos = 0
maxchar = s[0]
for i in range(1,len(s)):
    if s[i] >= maxchar:
        maxchar = s[i]
        maxpos = i
print(f"{maxchar}   {maxpos}")