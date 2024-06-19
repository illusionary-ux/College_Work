class Vector:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y, self.z + other.z)
    def __sub__(self, other):
        return Vector(self.x - other.x, self.y - other.y, self.z - other.z)
    def __str__(self):
        return f"({self.x}, {self.y}, {self.z})"
a,b,c = map(int,input().split(","))
d,e,f = map(int,input().split(","))
v1 = Vector(a,b,c)
v2 = Vector(d,e,f)
result1 = v1+v2
result2 = v1-v2
print(f"{v1} + {v2} = {result1}")
print(f"{v1} - {v2} = {result2}")