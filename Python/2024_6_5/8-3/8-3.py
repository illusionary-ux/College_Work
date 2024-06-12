fp1 = open("freedom.txt","r",encoding="utf-8")
fp2 = open("dic.txt", "w", encoding="utf-8")
dic = {}
for line in fp1:
    keys = line.lower().split()
    for key in keys:
        if key in dic.keys():
            dic[key] += 1
        else:
            dic[key] = 1
for key,value in sorted(dic.items()):
    fp2.write(key + " " + str(value) + "\n")