class employee:
    company="amazon"
    def __init__(self):
        print(f"your company is {self.company}")

class student:
    marks=400
    def __init__(self):
        print(f"your marks {self.marks}")        

class programmer(student,employee):
    company="flipkart"
    marks=300
    def __init__(self):
        print(f"your marks {self.marks}")
        print(f"your company is {self.company}")

a=programmer()
b=employee()
c=student()
print(a.marks)