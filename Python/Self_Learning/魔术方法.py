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
print(stu_1<stu_2)
