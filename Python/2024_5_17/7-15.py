list1 = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E']
list2 = list(input())
new = []
for c in list2:
    if c.upper() in list1:
        new.append(c)
result16 = ''.join(new)
result10 = int(result16,16)
print(result16)
print(result10)