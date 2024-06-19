x =int(input())
if x <= 50000:
    result = 0
elif x <= 100000:
    result = x * 0.1
else:
    result = x * 0.2
print("%.2f" % result)