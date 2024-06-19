import random


def generate_passwords(seed, num_passwords, password_length):
    # 定义字符列表
    chars = [chr(i) for i in range(ord('a'), ord('z') + 1)] + \
            [chr(i) for i in range(ord('A'), ord('Z') + 1)] + \
            [chr(i) for i in range(ord('0'), ord('9') + 1)]

    # 设置随机种子
    random.seed(seed)

    # 生成随机密码
    passwords = []
    for _ in range(num_passwords):
        password = ''.join(random.choice(chars) for _ in range(password_length))
        passwords.append(password)

    return passwords


# 获取输入
seed, num_passwords, password_length = map(int, input().split())

# 生成随机密码
passwords = generate_passwords(seed, num_passwords, password_length)

# 输出随机密码
for password in passwords:
    print(password)
