class Pet:
    def __init__(self,name,age):
        self.__name = name
        self.__age = age
    def get_name(self):
        return self.__name
    def get_age(self):
        return self.__age
    def __str__(self):
        return f"{self.get_name()} is {self.get_age()} age!"


pet_name = input()
pet_age = int(input())

# 创建一个Pet实例.
mypet = Pet(pet_name, pet_age)
print('Here is the data that you entered: ')
print('Pet name:', mypet.get_name())
print('Age of pet:', mypet.get_age())
print(mypet)