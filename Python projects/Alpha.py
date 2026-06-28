class employee:
    company="amazon"
    def __init__(self):
        print(f"your company is {self.company}")

class student:
    marks=400
    def __init__(self):
        print(f"your marks{self.marks}")        

class programmer(employee , student):
    company="flipkart"
    marks=300

a=programmer()
b=employee()
c=student()
