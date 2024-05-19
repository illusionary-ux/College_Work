# 计算校验码
def calculate_check_code(id_number):
    # 权重
    weights = [7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2]
    # 校验码对应关系
    check_code_map = {0: '1', 1: '0', 2: 'X', 3: '9', 4: '8', 5: '7', 6: '6', 7: '5', 8: '4', 9: '3', 10: '2'}

    # 计算加权和
    weighted_sum = sum(int(id_number[i]) * weights[i] for i in range(17))
    # 取模
    mod = weighted_sum % 11
    # 返回校验码
    return check_code_map[mod]

# 验证身份证号码
def validate_id_numbers(N, id_numbers):
    invalid_id_numbers = []
    for id_number in id_numbers:
        # 检查前17位是否全为数字
        if not id_number[:17].isdigit():
            invalid_id_numbers.append(id_number)
            continue
        # 计算校验码
        calculated_check_code = calculate_check_code(id_number)
        # 检查校验码是否正确
        if id_number[17] != calculated_check_code:
            invalid_id_numbers.append(id_number)
    return invalid_id_numbers

# 主函数
def main():
    # 读取输入
    N = int(input())
    id_numbers = [input() for _ in range(N)]
    
    # 验证身份证号码
    invalid_id_numbers = validate_id_numbers(N, id_numbers)
    
    # 输出结果
    if invalid_id_numbers:
        for id_number in invalid_id_numbers:
            print(id_number)
    else:
        print("All passed")

main()
