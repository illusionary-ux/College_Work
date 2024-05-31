def weighted_sum(nested_list, depth=1):
    """
    递归计算嵌套列表的加权和。
    :param nested_list: 输入的嵌套列表
    :param depth: 当前的层次权重，默认从1开始
    :return: 加权和
    """
    total = 0
    for element in nested_list:
        if isinstance(element, list):
            total += weighted_sum(element, depth + 1)
        else:
            total += element * depth
    return total

# 示例输入
input_list = eval(input())

# 计算加权和
result = weighted_sum(input_list)
print(result)