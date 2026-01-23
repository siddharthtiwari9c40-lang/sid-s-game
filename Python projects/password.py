y={1,2,3,4,5,6,7,8,9}
x=int(input("enter the password to check:"))
try:
    w=int(x)
    if w in y:
        print("can't use this")
    else:
        print("ok")    
except valueerror:
    printf("nd")        