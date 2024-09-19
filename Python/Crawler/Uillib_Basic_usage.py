import urllib.request

url = 'https://baidu.com'

# 模拟浏览器向服务器发送请求

response = urllib.request.urlopen(url)

# read方法 返回的时字节形式的二进制数据
# 获取页面的源码 -- read
# 将二进制数据转化为字符串（解码）--decode（‘编码格式’）
code = response.read().decode('utf-8')


print(code)