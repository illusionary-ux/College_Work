class Student:
    name = None

    def say_hi(self):
        print(f"helle,{self.name}")
stu_1 = Student()
stu_1.name = "a"
stu_1.say_hi()