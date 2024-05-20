# Python学习笔记
## 基础功能


### 列表、元组、字符串、集合、字典符号的使用
- 列表：[]
- 元组：()
- 字符串：""
- 集合与字典：{}

集合：{元素，元素，元素...}  逗号分隔，元素不重复

字典：{key:value, key:value...}

### 序列
序列是指内容连续、有序、可使用下标索引的一类数据容器

**列表、元组、字符串都是序列**


### 列表的基础操作

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

### 集合的基础操作
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