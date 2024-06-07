# 打开文件进行读写
fp1 = open("water.txt", "r")
fp2 = open("fee.txt", "w")

# 逐行处理输入文件
for line in fp1:
    # 去除行末尾的换行符并按空格分割
    data = line.strip().split()
    # 取出账号
    account_number = data[0]
    # 将用水读数转换为整数列表
    readings = list(map(int, data[1:]))

    # 计算总用水量
    total_usage = sum(readings[i] - readings[i - 1] for i in range(1, len(readings)))
    # 计算总水费
    total_fee = total_usage * 1.05

    # 将结果写入输出文件
    fp2.write(f"{account_number} {total_fee:.2f}\n")

# 关闭文件
fp1.close()
fp2.close()

print("费用计算完成，并已保存到fee.txt文件中")
