from abc import ABC
# class student:
#     def __init__(self,name,marks):
#         self.__name=name 
#         self.__marks=marks 
#     def get_marks(self):
#         return self.__marks
#     def get_name(self):
#         return self.__name
# s=student("sid",99)
# print(s.get_name())
# print(s.get_marks())

# class animal(ABC):
#     def sound(self):
#         pass
# class dog(animal):
#     def sound(self):
#         print("bark")
# class cat(animal):
#     def sound(self):
#         print("mew")
# d=dog()
# c=cat()
# d.sound()
# c.sound()

class animal:
    def __init__(self,name):
        self.name = name 
    def eat(self):
        print(f"{self.name} is eating")
class dog(animal):
    def bark(self):
        print(f"{self.name} says : woof")
d=dog("tom")
d.eat()
d.bark()
