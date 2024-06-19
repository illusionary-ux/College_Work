def check_password_strength(password):
    if len(password) <= 6:
        return "Illegal Password"

    has_upper = has_lower = has_digit = has_underscore = False

    for char in password:
        if char.isupper():
            has_upper = True
        elif char.islower():
            has_lower = True
        elif char.isdigit():
            has_digit = True
        elif char == '_':
            has_underscore = True
        else:
            return "Illegal Password"

    strength = sum([has_upper, has_lower, has_digit, has_underscore])
    # 布尔类型求和
    return str(strength)

# 获取输入
password = input()

# 检查密码强度并输出结果
print(check_password_strength(password))
