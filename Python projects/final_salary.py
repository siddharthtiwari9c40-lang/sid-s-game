a=int(input("enter your salary = "))

inc=(15*a)/100
a+=inc
print("incremented salary = ",a)

tax=(8*a)/100
a-=tax
print("salary after taxes = ",a)

bonus = 5000
a+=bonus
print("salary after bonus/final salary= ",a)
