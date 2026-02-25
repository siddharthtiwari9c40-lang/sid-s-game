# a=int(input("enter your salary = "))

# inc=(15*a)/100
# a+=inc
# print("incremented salary = ",a)

# tax=(8*a)/100
# a-=tax
# print("salary after taxes = ",a)

# bonus = 5000
# a+=bonus
# print("salary after bonus/final salary= ",a)

#######################################################################################################

z=int(input("enter the base salary = "))
y=int(input("enter  experiance(in years) = "))
x=z
if y <2:
    x*=105/100
elif y>=2 and y<=5:
    x*=110/100
else:
    x*=115/100
g1=x
pfund=x*12/100
x-= x*12/100


x-=200
tax=200

x+=z*20/100

print("gross salary = ", g1)
print("total dudection = ",tax + pfund)
print("net salary = ",x)
