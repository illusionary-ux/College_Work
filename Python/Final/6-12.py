class Dues:
    def __init__(self,id,name,salary):
        self.id = id
        self.name = name
        self.salary = salary
    def calculate(self):
        if self.salary <= 5000:
            return self.salary * 0.01
        else:
            return self.salary * 0.015
    def __str__(self):
        return f"工号: {id}, 姓名: {name}, 党费: {self.calculate()}"


id, name, salary = input().split(',')
salary = float(salary)
print(str(Dues(id, name, salary)))