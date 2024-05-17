s1 = input()
for i in range(len(s1)):
    if s1[i].isupper():
        print(chr(ord('Z') - (ord(s1[i]) - ord('A'))), end='')
    else:
        print(s1[i], end='')