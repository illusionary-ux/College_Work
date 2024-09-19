import urllib.request

url = 'http://www.baidu.com'

response = urllib.request.urlopen(url)

# 一个类型
# print(type(response))
# 六个方法

# 按照每一字节读取
# content = response.read() read里面加参数意思是只返回几个字节的数据
# print(type(content))
# print(content)


# 读取一行
# content = response.readline()
# print(content)

# 一次多行
# content = response.readlines()
# print(content)

# 返回状态码 如果为200 证明逻辑没有错误
print(response.getcode())

print(response.geturl())
print(response.getheaders())