import string

# 获取输入字符串
input_str = input().strip()

# 初始化集合来跟踪已经遇到的字母
encountered = set()

# 初始化结果列表
result = []

# 遍历输入字符串
for char in input_str:
    # 如果是字母且不在集合中
    if char.isalpha() and char.lower() not in encountered:
        # 将字母添加到结果列表和集合中
        result.append(char)
        encountered.add(char.lower())
        # 如果结果列表已经有10个字母，停止迭代
        if len(result) == 10:
            break

# 打印结果列表或者提示信息
if len(result) == 10:
    print(''.join(result))
else:
    print('not found')
