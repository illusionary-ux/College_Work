fp1 = open("example.txt", mode='r')
fp2 = open("result.txt", mode='w')
for line in fp1:
    for ch in line:
        if ch.isupper():
            fp2.write(ch.lower())
        else:
            fp2.write(ch.upper())
fp1.close()
fp2.close()
