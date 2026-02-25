i=0
atempt=3
a="siddharth"
b="password"
while i!=3:
    x=input("Enter username = ")
    y=input("Enter password = ")
    if x==a and y==b:
        print("welcome")
        break  
    elif x!=a and y!=b:
        print("both username and password are wrong")
    elif x!=a:
        print("wrong username")
    else:
        print("wrong password")
    i+=1
    print("attempts used out of 3 = ",i)
if i==atempt:
    print("no more attempts left!!")