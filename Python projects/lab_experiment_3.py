# positive,negative check
a=int(input("enter any number= "))
if a>0:
    print("its a possitive number")
elif a<0:
    print("its a negative number")
else:
    print("its zero")           

# check largest of 3 numbers
a=int(input("enter 1st number: "))  
b=int(input("enter 2nd number: "))  
c=int(input("enter 3rd number: "))    

if a>b:
    if a>c:
        print(a,"is the biggest number")
    else:
        print(c,"is the biggest number")    
else:
    if b>c:
        print(b,"is the biggest number")         
    else:
        print(c,"is the biggest number")

# grade using elif
a=int(input("enter marks: "))
if a>=90:
    print("grade: A")
elif a>=70:
    print("grade: B")
elif a>=50:
    print("grade: C")
else:
    print("grade: F")    