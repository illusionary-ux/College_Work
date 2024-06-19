def calculate_perimeter(values):
    if len(values) == 1:
        radius = float(values[0])
        if radius <= 0:
            return 0
        perimeter = 2 * 3.14 * radius
        return perimeter

    elif len(values) == 2:
        length = float(values[0])
        width = float(values[1])
        if length <= 0 or width <= 0:
            return 0
        perimeter = 2 * (length + width)
        return perimeter

    elif len(values) == 3:
        a = float(values[0])
        b = float(values[1])
        c = float(values[2])
        if a <= 0 or b <= 0 or c <= 0:
            return 0
        if a + b > c and a + c > b and b + c > a:
            perimeter = a + b + c
            return perimeter
        return 0
    else:
        return 0


def main():
    import sys
    input = sys.stdin.read
    data = input().split()

    if len(data) not in [1, 2, 3]:
        print("输入数据格式不正确")
        return

    perimeter = calculate_perimeter(data)

    if len(data) == 1:
        print(f"圆形的周长为: {perimeter:.2f}")
    elif len(data) == 2:
        print(f"矩形的周长为: {perimeter:.2f}")
    elif len(data) == 3:
        print(f"三角形的周长为: {perimeter:.2f}")



main()
