a, b = map(int, input().split())
a1 = bin(a)[2:]  # 去除 '0b' 前缀
b1 = bin(b)[2:]  # 去除 '0b' 前缀
max_len = max(len(a1), len(b1))  # 获取较长的二进制字符串的长度
a1 = a1.zfill(max_len)  # 使用 0 填充较短的二进制字符串
b1 = b1.zfill(max_len)  # 使用 0 填充较短的二进制字符串

cnt = 0
for i in range(max_len):
    if a1[i] != b1[i]:
        cnt += 1

print(cnt)