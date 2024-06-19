def sort_scores(std_scores):
    # 计算每个学生的平均分
    avg_scores = {name: sum(scores) / len(scores) for name, scores in std_scores.items()}

    # 将平均分按递减顺序排序
    sorted_avg_scores = sorted(avg_scores.items(), key=lambda item: item[1], reverse=True)

    # 返回元组形式的排序结果
    return tuple(sorted_avg_scores)


# 读取输入的学生成绩字典
std_scores = eval(input())

# 获取排序结果
result = sort_scores(std_scores)

# 检查结果是否为元组
if not isinstance(result, tuple):
    exit()

# 按要求格式输出结果
for i in range(len(result)):
    print(f'第 {i + 1} 名是: {result[i][0]}, 平均分是: {result[i][1]:.1f}.')
