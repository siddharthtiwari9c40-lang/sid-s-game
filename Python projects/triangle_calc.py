import math

x=int(input("enter the base of the triangle = "))
y=int(input("enter the hight of the triangle = "))

z= x**2 + y**2
hyp=math.sqrt(z)

area= (x*y)/2
peri = x+y+hyp

ta=x/y
angle= math.degrees(math.atan(ta))
print("hypotenuse = ",hyp)
print("area = ",area)
print("perimeter = ",peri)
print("angle between base and hypotenuse = ", angle)