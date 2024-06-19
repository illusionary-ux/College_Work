import random


class Point:
    x = 0
    y = 0

    def move(self, x1, y1):
        self.x += x1
        self.y += y1

    def location(self):
        return f"({self.x}, {self.y})"


seed, n = map(int, input().split())
random.seed(seed)
pnt = Point()
for step in range(n):
    pnt.move(random.randint(-20, 20), random.randint(-20, 20))
print(f"移动 {n} 步后，点的位置为 {pnt.location()}.")
