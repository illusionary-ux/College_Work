def cost(n, s):
    if s == "海鲜":
        return 80 * n
    elif s == "中餐":
        return 60 * n
    else:
        return 55 * n

n, s = input().split()
n = int(n)
print(f'人数: {n}, 类别: {s}, 餐费: {cost(n, s)}.')