import random
def generate(x,n):
    random.seed(x)
    matrix = [[random.randint(0,100) for _ in range(n)]for _ in range(n)]
    return matrix
def print_matrix(matrix):
    for row in matrix:
        print("".join(f"{num:<4}" for num in row))
def find(matrix):
    point = []
    n = len(matrix)

    for i in range(n):
        row_max = max(matrix[i])
        max_i = [j for j, value in enumerate(matrix[i]) if value == row_max]
        for j in max_i:
            col_min = min(matrix[k][j] for k in range(n))
            if matrix[i][j] == col_min:
                point.append((i,j,matrix[i][j]))

    return point
x, n = map(int, input().split())
matrix = generate(x, n)

print_matrix(matrix)

saddle_points = find(matrix)

if saddle_points:
    for point in saddle_points:
        print(f"[{point[0]}, {point[1]}] = {point[2]}")
else:
    print("Not Exist.")