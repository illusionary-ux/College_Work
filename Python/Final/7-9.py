def generate_pascals_triangle(n):
    triangle = [[1]]

    for i in range(1, n):
        row = [1]
        for j in range(1, i):
            row.append(triangle[i - 1][j - 1] + triangle[i - 1][j])
        row.append(1)
        triangle.append(row)

    return triangle


def print_pascals_triangle(triangle):
    for row in triangle:
        print("".join(f"{num:<5}" for num in row))


n = int(input())
if n > 2:
    triangle = generate_pascals_triangle(n)
    print_pascals_triangle(triangle)
else:
    print("n should be greater than 2.")
