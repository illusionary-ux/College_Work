# 读取输入
num_students = int(input())
students = []

# 读取每个学生的性别和姓名，并存储在列表中
for _ in range(num_students):
    gender, name = input().split()
    students.append((gender, name))

# 初始化用于存储配对结果的列表和已经使用的学生索引集合
pairs = []
used_indices = set()

# 遍历学生列表，进行配对
for i in range(num_students):
    if i in used_indices:
        continue
    for j in range(num_students - 1, 0, -1):
        if j in used_indices or i == j:
            continue
        # 检查性别是否不同
        if students[j][0] != students[i][0]:
            pairs.append((students[i][1], students[j][1]))
            used_indices.add(i)
            used_indices.add(j)
            break

# 输出结果
for pair in pairs:
    print(pair[0], pair[1])