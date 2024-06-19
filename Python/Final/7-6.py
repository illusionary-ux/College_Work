a,b = map(int, input().split(','))
flag = 0
for x in range(a):
    for y in range(a):
        if x + y == a and 2 * x + 4 * y == b:
            flag = 1
            print(f"鸡有 {x} 只，兔有 {y} 只。")

if not flag:
    print("无解。")