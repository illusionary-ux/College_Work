class Square:
    def __init__(self,edge):
        self.__edge = edge
    def get_edge(self):
        return self.__edge
    def set_edge(self,edge):
        self.__edge = edge
    def Circumference(self):
        return self.__edge*4
    def Area(self):
        return self.__edge**2
class Cube(Square):
    def __init__(self,edge):
        super().__init__(edge)
    def Volume(self):
        return self.get_edge()**3
    def Area(self):
        return self.get_edge()**2*6