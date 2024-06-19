class Recruit:
    def __init__(self,id, name, score1, score2):
        self.id = id
        self.name = name
        self.score1 = score1
        self.score2 = score2
    def calculate(self):
        return self.score1 * 0.7 + self.score2 * 0.3
    def __str__(self):
        return f"考号: {id}, 姓名: {name}, 总成绩: {self.calculate()}"

id, name, score1, score2 = input().split(',')
print(Recruit(id, name, float(score1), float(score2)))