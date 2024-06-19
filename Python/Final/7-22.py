a,b,c = map(int,input().split())
if a > 24:
    a = 0
if b > 60:
    b = 0
if c > 60:
    c = 0
print(f"当前时间: {a}:{b}:{c}")