#WAP to perform different arithmetic operations on nums in python. 
a= int(input("enter 1st num: "))
b= int(input("enter 2nd num: "))
sum = a+b
sub = a-b
multi=a*b
div=a/b
mod=a%b
flor=a//b
expo=a**b

print("a+b",sum)
print("a-b",sub)
print("a*b",multi)
print("a/b",div)
print("a mod b",mod)
print("a flor divide b",flor)
print("a^b",expo)
#WAP to show use of various Math Module functions. 
import math
num=float(input("enter 1st num = "))
num2=float(input("enter 2nd num = "))
absolute =math.fabs(num)
print(f"\n1. absolute value : |{num}| = {absolute}")
ceiling = math . ceil ( num )
print ( f"2. Ceiling : ceil ({ num }) = { ceiling }")
floor = math . floor ( num )
print ( f"3. Floor : floor ({ num }) = { floor }")
if num >= 0:
    sqrt = math . sqrt ( num )
print ( f"4. Square Root : sqrt ({ num }) = { sqrt }")
power = math .pow ( num , 2)
print ( f"5. Power : { num }^2 = { power }")
if num >= 0 and num == int ( num ) :
    factorial = math . factorial (int ( num ) )
    print ( f"6. Factorial : {int ( num )}! = { factorial }")
angle_radians = math . radians ( num2 )
sine = math . sin ( angle_radians )
print ( f"7. Sine : sin ({ num2 }) = { sine}")
print (" Calculates sine of angle \n")
cosine = math . cos ( angle_radians )
print ( f"8. Cosine : cos ({ num2 }) = { cosine}")
print (" Calculates cosine of angle \n")
tangent = math . tan ( angle_radians )
print ( f"9. Tangent : tan ({ num2 }) = { tangent}")
print (" Calculates tangent of angle \n")
if num > 0:
    log_natural = math . log ( num )
    print ( f"10. Natural Log : ln ({ num }) = { log_natural}")
    print (" Logarithm base e\n")
log10 = math . log10 ( num )
print ( f"11. Log Base 10: log10 ({ num }) = { log10}")
print (" Logarithm base 10\n")


#WAP to calculate Area of circle  and Perimeter of a rectangle. 

r=int(input("enter the radius of the circle: "))
l=int(input("enter the length of the rectangle"))
b=int(input("enter the wredth of the rectangle"))

area=3.14*r*r
peri=2*(l+b)
print("area of circle: ",area)
print("perimeter of the rectangle: ",peri)

###########################################################################################################

import math

a=int(input("enter a number to find its square  root = "))
print(math.sqrt(a))

a=int(input("enter a number to find its factorial = "))
print(math.factorial(a))

a=float(input("enter a number to find its ceiling value= "))
print(math.ceil(a))

a=float(input("enter a number to find its floor value= "))
print(math.floor(a))

a=int(input("enter a number to find its sin ,cos,tan value= "))
r=math.radians(a)
print("sin = ",math.sin(r))
print("cos = ",math.cos(r))
print("tan = ",math.tan(r))
