n = int(input())
result = list()
cnt = 0
while cnt < n:
    tmp = input().strip()
    if tmp.isdigit():
        result.append(tmp)
        cnt+=1
    else:
        result.append("error")
flag = 0
tot = 0
for ch in result:

    if ch == "error":
        print("错误！请重新输入。")
        flag = 1
    else:
        tot += int(ch)
if not flag:
    print("所有数据正常")
    print("平均成绩为: %.2f" % (tot/n))
else:
    print("平均成绩为: %.2f" % (tot/n))