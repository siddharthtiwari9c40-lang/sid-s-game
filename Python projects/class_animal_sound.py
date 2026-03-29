from abc import ABC
class animal(ABC):
    def sound(self):
        pass
class dog(animal):
    def sound(self):
        print("dog -> bark")
class cat(animal):
    def sound(self):
        print("cat -> mew")
d=dog()
c=cat()
d.sound()
c.sound()