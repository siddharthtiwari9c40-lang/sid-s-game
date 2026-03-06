a=input("enter a string of words and digits = ")
dig=0
cap=0
low=0
for i in a:
    if i.isdigit():
        dig+=1
    if i.islower():
        low+=1
    if i.isupper() :
        cap+=1
print("no. of capital letters = ",cap)
print("no. of small letters = ",low)
print("no. of digits letters = ",dig)