class Vehicles:
    def __init__(self, tradeMark, color):
        self.__tradeMark = tradeMark
        self.__color = color

    def run(self):
        print("我已经开动了")

    def showInfo(self):
        print("商标：", self.__tradeMark)
        print("颜色：", self.__color)

class Truck(Vehicles):
    def __init__(self, tradeMark, color, cweight):
        super().__init__(tradeMark, color)
        self.__cweight = cweight

    def showTruck(self):
        print("载重量：", self.__cweight)
        print("商标：", self._Vehicles__tradeMark)
        print("颜色：", self._Vehicles__color)

t = Truck("东风", "白色", 20)
t.showTruck()