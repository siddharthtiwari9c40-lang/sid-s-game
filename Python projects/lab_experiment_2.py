#WAP to input two numbers and perform arithmetic operations
a=int(input("enter 1st number: "))
b=int(input("enter 2nd number: "))
r = a+b*2     
print("a+b*2 =",r)

r = (a+b)*2   
print("(a+b)*2 =",r)

r = a-b/2      
print("a-b/2=",r)

r = (a-b)/2   
print("(a-b)/2 =",r)

#WAP to use relational and logical operators
a=int(input("enter python marks: "))
b=int(input("enter DSA marks: "))
c=int(input("enter MATHS marks: "))
res = a+b+c
avg = (res)/3
if (a>=40) and (b>=40) and (c>=40):
    print("you have passed ")
    print("total marks :",res,"/ 300")
    print("avg marks :",avg)
else:
    print("you have failed")
    print("total marks :",res)
    print("avg marks :",avg)   

#Determine loan eligibility based on age and income
a=int(input("enter your age= "))
b=int(input("enter your yerly income= "))
if a>=20 and b>=800000:
    print("elegible")
else:
    print("not elegible")    