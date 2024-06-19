# Python学习笔记
## 一、基础功能


### 1. 列表、元组、字符串、集合、字典符号的使用
---
- 列表：[]
- 元组：()
- 字符串：""
- 集合与字典：{}

集合：{元素，元素，元素...}  逗号分隔，元素不重复

字典：{key : value, key : value...}

### 2. 序列
序列是指内容连续、有序、可使用下标索引的一类数据容器

**列表、元组、字符串都是序列**

---


### 3. 列表的基础操作

0. 创建列表
```python
my_list = [1, 2, 3, 4, 5]
```
1. 获取列表长度
```python
length = len(my_list)
```
2. 添加元素
```python
my_list.append(6)  # 在列表末尾添加元素
my_list.insert(0, 0)  # 在指定位置插入元素
```
3. 删除元素
```python
del my_list[0]  # 删除指定位置的元素
my_list.remove(3)  # 删除指定值的元素
popped_element = my_list.pop()  # 弹出并返回末尾元素
```
4. 查找元素
```python
index = my_list.index(3)  # 查找指定值的元素的索引
count = my_list.count(3)  # 统计指定值在列表中出现的次数
```
5. 列表合并
```python
merged_list = my_list1 + my_list2  # 使用加号操作符合并列表
my_list1.extend(my_list2)  # 使用 extend() 方法合并列表
```
6. 列表排序
```python
my_list.sort()  # 对列表进行就地排序
sorted_list = sorted(my_list)  # 返回排序后的新列表
```

### 4. 集合的基础操作
---
0. 创建空集合
```python
empty_set = set()

# 使用大括号创建集合
my_set = {1, 2, 3}

# 使用set()函数创建集合
another_set = set([4, 5, 6])
```
1. 基本操作
```python
# 添加元素
my_set.add(4)

# 移除元素
my_set.remove(2)

# 检查元素是否存在
if 3 in my_set:
    print("3存在于集合中")

# 遍历集合
for item in my_set:
    print(item)
```

2. 集合运算
```python
# 并集
union_set = my_set | another_set

# 交集
intersection_set = my_set & another_set

# 差集
difference_set = my_set - another_set

# 对称差集
symmetric_difference_set = my_set ^ another_set
```

3. 其他操作
```python
# 获取集合长度
set_length = len(my_set)

# 清空集合
my_set.clear()

# 复制集合
copied_set = my_set.copy()

# 判断是否为子集
is_subset = {1, 2}.issubset({1, 2, 3})

# 判断是否为超集
is_superset = {1, 2, 3}.issuperset({1, 2})
```
### 5.类与对象
---
#### 5.1 类与对象的定义
```python
class Student:
    name = None
    gender = None
    nationality = None
    age = None
    native_place = None
stu_1 = Student()
#创建了一个对象其中Student被称为类，通过Student()创建了一个对象，用stu_1接收它
```

#### 5.2 类的成员方法

```python
class 类名称：
    类的属性(类的变量、成员变量)

    类的行为(类中的函数、成员方法)
```
```python
class Student:
    name = None
    #类的属性
    def say_hi(self):
        print(f"helle,{self.name}")
    #类的行为
```
---
#### 5.3 构造方法

```python
def __init__(self,参数,参数...):
```
在构造类的时候，会自动执行

在构造类的时候，会传入参数自动传递给__init__方法使用
```python
class Student:
    def __init__(self,name,age,tel):
        self.name = name
        self.age = age
        self.tel = tel
        print("success")
stu_1 = Student("aaa",31,2344)
print(stu_1.name)
```
---
#### 5.4 魔术方法

- `__str__` 字符串方法
- `__lt__` 小于、大于符号重载
- `__le__` 小于等于、大于等于符号重载
- `__eq__` ==符号重载
```python
class Student:
    def __init__(self,age,name):
        self.age = age
        self.name = name
    #方法重载
    def __str__(self):
        return f"name:{self.name},age:{self.age}"

    def __lt__(self, other):
        return self.age < other.age
stu_1 = Student(32,"a")
stu_2 = Student(64,"bbb")
print(stu_1 < stu_2)
```
---
#### 5.5 封装

类中提供了私有成员的形式来支持

- 私有成员变量
- 私有成员方法

私有成员的定义：变量名以__开头(双下划线)，私有成员只能在内的其他成员里面访问，不能在外部(类对象)中访问。

```python
class Phone:
    __CURRENT_COLTAGE = 5
    def __keep_single_core(self):
        print("保持单核心")
    def call_by_5g(self):
        if self.__CURRENT_COLTAGE >= 10:
            print("5G通话")
        else:
            self.__keep_single_core()
            print("无法5G通话")
            
p = Phone()
# p.__keep_single_core() 无法调用
p.call_by_5g()
"""

class Phone:
    def __init__(self):
        self.__is_5g_enable = True
    def __check_5g(self):
        if self.__is_5g_enable:
            print("5G通话a")
        else:
            print("无法5G通话")
    def call_by_5g(self):
        self.__check_5g()
        print("5G通话b")
p = Phone()
p.call_by_5g()
```
---
#### 5.6 继承
继承的基础语法(单继承)

```python
class 类名(父类名)：
	类内容体
```

继承分为：单继承与多继承

单继承

```python
class Phone():
    IMEI = None
    Producer = "A"
    def call_by_4g(self):
        print("4g")
class Phone2022(Phone):
    face_id = "100111"

    def call_by_5g(self):
        print("5g")

p = Phone2022()
p.Producer
p.call_by_4g()
p.call_by_5g()
```

---

多继承

```python
class 类名(父类1,父类2，父类3...)：
	类内容体
```

```python
class Phone():
    IMEI = None
    Producer = "A"
    def call_by_4g(self):
        print("4g")
class Phone2022(Phone):
    face_id = "100111"

    def call_by_5g(self):
        print("5g")

p = Phone2022()
p.Producer
p.call_by_4g()
p.call_by_5g()

class NFCReader:
    type = "5"
    def read_card(self):
        print("read")
    def write_card(self):
        print("write")
class Remote:
    def RemoteControler(self):
        print("controler")


class my_phone(Phone,NFCReader,Remote):
    pass
p = my_phone()
p.call_by_4g()
p.read_card()
p.write_card()
p.RemoteControler()
```

注意：多个父类中，如果有同名的成员，那么默认以从左到右的继承顺序。即先继承的保留，后继承的被覆盖(同名的成员属性时)

### 6. 未知个数数据的输入方法

使用

```python
import sys
input = sys.stdin.read
data = input().split()
```

data为存放数据的一个列表，后续只需要通过`len(data)`即可得知数据个数
