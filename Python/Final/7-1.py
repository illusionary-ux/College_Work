import random

def generate_matrix(seed, n):
    random.seed(seed)
    return [[random.randint(0, 100) for _ in range(n)] for _ in range(n)]

def transpose_matrix(matrix):
    n = len(matrix)
    return [[matrix[j][i] for j in range(n)] for i in range(n)]

# 输入种子数和矩阵大小
x, n = map(int, input().split())

# 生成随机方阵
matrix = generate_matrix(x, n)

# 计算转置矩阵
transposed_matrix = transpose_matrix(matrix)

# 输出原矩阵和转置矩阵
print(matrix)
print(transposed_matrix)
