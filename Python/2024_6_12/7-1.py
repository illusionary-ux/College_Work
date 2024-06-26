class Calculator:
    def __init__(self,a,b):
        self.a = a
        self.b = b
    def add(self):
        return self.a + self.b

    def subtract(self):
        return self.a - self.b

    def multiply(self):
        return self.a * self.b
    
    def division(self):
        if self.b == 0:
            return "Error: Division by zero"
        return int(self.a/self.b)
result = []
for ch in ['+','-','*','/']:
    a,b = map(int,input().split())
    if ch == '+':
        result.append(Calculator(a,b).add())
    elif ch == '-':
        result.append(Calculator(a,b).subtract())
    elif ch == '*':
        result.append(Calculator(a,b).multiply())
    elif ch == '/':
        result.append(Calculator(a,b).division())
for i in result:
    print(i)