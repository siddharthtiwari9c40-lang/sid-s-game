# Implement a class with constructors and methods; demonstrate object creation. 

# class student:
#     def __init__(self,name):
#         self.name=name
#     def show(self):
#         print(self.name)

# s1=student("siddharth")
# s2 = student("nice")

# s1.show()
# s2.show()

# Create a class Book that accepts title and author as parameters in its constructor. 
# Create a method display() to print the book details  

# class book:
#     def __init__(self,tital,author):
#         self.tital = tital
#         self.author = author
#     def display(self):
#         print(f"book tital={self.tital} by the author = {self.author}")

# d1=book('Lord of the mysteries','Cuttlefish')
# d2=book('Lord of the rings','J.R.R Tolkien')

# d1.display()
# d2.display()

# Write a program to show inheritance and method overriding in OOP

class Animal:
    def sound(self):
        print("Animals make sound")

class Dog(Animal):
    def sound(self):  
        print("Dog barks")

a = Animal()
d = Dog()

a.sound()  
d.sound() 