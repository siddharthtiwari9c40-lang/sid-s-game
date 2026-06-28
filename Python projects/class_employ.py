class employee:
    def __init__(self,name,id,salary):
        self.name = name
        self.id = id
        self.salary = salary
    
    def get_name(self):
        return self.name
    def get_id(self):
        return self.id
    def get_salary(self):
        return self.salary

    def set_salary(self, salary):
        if salary < 0:
            print("Error: Salary cannot be negative")
        else:
            self.salary = salary

e1= employee("sid",111,1000)
e2= employee("siddharth",121,1500)


print(e1.get_name())     
print(e1.get_salary())   


e1.set_salary(50000)

e1.set_salary(-1000)

print(e1.get_salary())   

e2.set_salary(-2000)     
print(e2.get_salary())   