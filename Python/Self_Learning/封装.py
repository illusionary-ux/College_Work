"""
class Phone:
    __CURRENT_COLTAGE = 5
    def __keep_single_core(self):
        print("保持单核心")
    def call_by_5g(self):
        if self.__CURRENT_COLTAGE >= 10:
            print("5G通话")
        else:
            self.__keep_single_core()
            print("无法5G通话")
            
p = Phone()
# p.__keep_single_core()
p.call_by_5g()
"""

class Phone:
    def __init__(self):
        self.__is_5g_enable = True
    def __check_5g(self):
        if self.__is_5g_enable:
            print("5G通话a")
        else:
            print("无法5G通话")
    def call_by_5g(self):
        self.__check_5g()
        print("5G通话b")
p = Phone()
p.call_by_5g()