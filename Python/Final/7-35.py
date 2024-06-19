x,y = map(int,input().split())
print(f"Before exchange: x={x} y={y}")
if y > x:
    x,y = y,x
print(f"After exchange: x={x} y={y}")
