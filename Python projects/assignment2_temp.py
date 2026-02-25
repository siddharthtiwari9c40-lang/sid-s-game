# Write a Python program that demonstrates the use of comparison operators.
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

print("num1 == num2 :", num1 == num2)
print("num1 != num2 :", num1 != num2)
print("num1 > num2  :", num1 > num2)
print("num1 < num2  :", num1 < num2)
print("num1 >= num2 :", num1 >= num2)
print("num1 <= num2 :", num1 <= num2)


if num1 == num2:
    print("Both numbers are equal.")
elif num1 > num2:
    print("First number is greater than second number.")
else:
    print("First number is smaller than second number.")

# Create a Python program that uses logical operators (and, or, not) to validate user login credentials.
i=0
atempt=3
a="siddharth"
b="password"
while i!=3:
    x=input("Enter usern = ")
    y=input("Enter password = ")
    if x==a and y==b:
        print("welcome")
        break  
    elif x!=a and y!=b:
        print("both usern and password are wrong")
    elif x!=a:
        print("wrong usern")
    else:
        print("wrong password")
    i+=1
    print("attempts used out of 3 = ",i)
if i==atempt:
    print("no more attempts left!!")

# Write a Python program using the Math module to calculate the following for a rightangled triangle:

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

# A company wants to calculate net salary after multiple deductions.

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

# Write a Python function armstrong check(n) that checks if a number is an Armstrong number.

def armstrong_check(x):
    b = 1
    
    while b <= x:
        a = 0
        temp = b
        digits = len(str(b))
        
        while temp > 0:
            i = temp % 10
            a += i ** digits
            temp //= 10
        
        if a == b:
            print(b)
        
        b += 1

x = int(input("Enter the number till which you want Armstrong values = "))
armstrong_check(x)

# Create a Python program for a “studnt Grade Manager” using lists:

a = []
b = []

for i in range(0, 5):
    x = input("enter your n = ")
    y = int(input("enter your marks = "))
    a.append(x)
    b.append(y)

avg = sum(b) / 5
print("avg marks = ", avg)

marks = max(b)
index = b.index(marks)
print("highest marks = ", marks, "student n = ", a[index])

stud = list(zip(a, b))
stud.sort(key=lambda x: x[1], reverse=True)

print("\nstudent sorted by marks (descending):")
for i in stud:
    print(i[0], "-", i[1])

print("\nstud who scored above average:")
for i in range(5):
    if b[i] > avg:
        print(a[i], "-", b[i])

# Write a Python program that implements the “FreshMart Grocery List Manager”

i = []

while True:
    print("\n1.Add item")
    print("2.Remove item")
    print("3.View i")
    print("4.Check if item exists")
    print("5.Clear all i")
    print("6.Total number of i")
    print("7.Exit")

    try:
        ch = int(input("enter choice = "))
    except:
        print("invalid input")
        continue

    if ch == 1:
        n = input("enter item n = ")
        i.append(n)
        print("item added")

    elif ch == 2:
        n = input("enter item n to remove = ")
        if n in i:
            i.remove(n)
            print("item removed")
        else:
            print("item not found")

    elif ch == 3:
        if len(i) == 0:
            print("no i in list")
        else:
            for i in range(len(i)):
                print(i+1, ".", i[i])

    elif ch == 4:
        n = input("enter item n to check = ")
        if n in i:
            print("item is in the list")
        else:
            print("item not found")

    elif ch == 5:
        i.clear()
        print("all i cleared")

    elif ch == 6:
        print("total i =", len(i))

    elif ch == 7:
        print("exiting program")
        break

    else:
        print("invalid choice")

# Create a Python program to demonstrate advanced list operations:

import random

a = []

for i in range(10):
    a.append(random.randint(1, 20))

print("original list =", a)

b = []   
c = []   

for i in a:
    if i % 2 == 0:
        b.append(i)
    else:
        c.append(i)

print("even numbers =", b)
print("odd numbers =", c)


d = []
for i in a:
    if i not in d:
        d.append(i)

print("after removing duplicates =", d)


e = []
for i in range(len(a)-1, -1, -1):
    e.append(a[i])

print("reversed list =", e)


f = sorted(d)

if len(f) >= 2:
    print("second smallest =", f[1])
    print("second largest =", f[-2])
else:
    print("not enough elements")

g = {}

for i in a:
    if i in g:
        g[i] += 1
    else:
        g[i] = 1

print("occurrences:")
for i in g:
    print(i, "=", g[i])


#Write a Python program for tuple operations with the following tasks

a = (10, -5, 7, -2, 15, -9, 4, -1, 8, -6)

print("tuple =", a)


s = sum(a)
avg = s / len(a)
mx = max(a)
mn = min(a)

print("sum =", s)
print("average =", avg)
print("maximum =", mx)
print("minimum =", mn)


p = 0
n = 0

for i in a:
    if i > 0:
        p += 1
    elif i < 0:
        n += 1

print("positive numbers =", p)
print("negative numbers =", n)


x = int(input("enter element to find index = "))

if x in a:
    print("first occurrence index =", a.index(x))
else:
    print("element not found")


b = list(a)
print("converted to list =", b)

b.append(100)   
print("modified list =", b)

a = tuple(b)
print("converted back to tuple =", a)


try:
    a[0] = 999
except TypeError:
    print("tuples are immutable (cannot change elements)")

# Write a comprehensive Python program for string analysis

a = input("enter a sentence = ")

print("\noriginal sentence =", a)


total = len(a)

v = 0   
c = 0   
d = 0   
s = 0   

for i in a:
    if i.isalpha():
        if i.lower() in "aeiou":
            v += 1
        else:
            c += 1
    elif i.isdigit():
        d += 1
    elif not i.isspace():
        s += 1

print("\ntotal characters =", total)
print("vowels =", v)
print("consonants =", c)
print("digits =", d)
print("special characters =", s)


b = ""
for i in a:
    if i != " ":
        b += i.lower()

if b == b[::-1]:
    print("it is a palindrome")
else:
    print("it is not a palindrome")

print("\nuppercase =", a.upper())
print("lowercase =", a.lower())
print("title case =", a.title())
print("swap case =", a.swapcase())


words = a.split()
long = ""

for i in words:
    if len(i) > len(long):
        long = i

print("\nlongest word =", long)


h = ""
flag = True

for i in a.lower():
    if i.isalpha():
        if i in h:
            flag = False
            break
        else:
            h += i

if flag:
    print("it is a heterogram")
else:
    print("it is not a heterogram")