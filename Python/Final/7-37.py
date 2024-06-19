w,h = map(float,input().split(","))
bmi = w / h / h
if bmi<18:
    print("超轻")
elif bmi <25:
    print("标准")
elif bmi<27:
    print("超重")
else:
    print("肥胖")