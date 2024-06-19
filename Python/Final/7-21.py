import random
class RandomMatrix:
    def __init__(self,seed,size):
        self.seed = seed
        self.size = size
        self.data = self.generate()
    def generate(self):
        random.seed(self.seed)
        matrix = [[random.randint(0,100) for _ in range(self.size)] for _ in range(self.size)]
        return matrix
    def display(self):
        for row in self.data:
            formatted_row = " ".join("{:<4}".format(num) for num in row)
            print(formatted_row)
seed,size = map(int,input().split())
matrix = RandomMatrix(seed, size)
matrix.display()