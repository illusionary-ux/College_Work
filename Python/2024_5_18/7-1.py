# 从输入中获取两个字典并将它们转换为字典对象
dict_a = dict(eval(input()))
dict_b = dict(eval(input()))

# 将字典b中的键值对合并到字典a中
for key in dict_b.keys():
    # 使用get方法获取字典a中键对应的值，如果不存在则返回默认值0，并加上字典b中对应键的值
    dict_a[key] = dict_a.get(key, 0) + dict_b[key]

# 将合并后的字典按照题目要求进行排序
sorted_items = sorted(dict_a.items(), key=lambda x: ord(x[0]) if isinstance(x[0], str) else x[0])

# 将排序后的键值对列表转换为字符串形式的字典，并去除空格和将单引号替换为双引号
result_str = str(dict(sorted_items)).replace(' ', '').replace("'", '"')

# 打印合并并排序后的字典
print(result_str)
