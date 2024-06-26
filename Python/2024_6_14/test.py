class A:
    def __init__(self):
        self.i = 1

    def m(self):
        self.i = 10

class B(A):
    def m(self):
        self.i += 1
        return self.i

def main():
    b = B()
    print(b.m())

main()
