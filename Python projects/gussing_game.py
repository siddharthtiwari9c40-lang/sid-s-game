from random import randint

x=int(input("enter your guess = "))
a=randint(0,10)
if x==a :
    print("yes you got it !!")
else:
    print("boooo!!!")
    print("right ans = ",a)