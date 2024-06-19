def mess_word(word):
    # 对不同长度的单词进行处理
    if len(word) <= 3:
        return word
    elif 3 < len(word) <= 5:
        return word[0] + word[2] + word[1] + word[3:]
    elif 5 < len(word) < 8:
        return word[0:2] + word[3] + word[2] + word[4:]
    elif len(word) >= 8:
        return word[0:2] + word[3] + word[2] + word[5] + word[4] + word[6:]
    else:
        return word

# 读取输入的句子
sentence = input().split()
# 对句子中的每个单词进行凌乱处理
word_list = [mess_word(x) for x in sentence]
# 拼接处理后的单词，形成新的句子并输出
print(" ".join(word_list))