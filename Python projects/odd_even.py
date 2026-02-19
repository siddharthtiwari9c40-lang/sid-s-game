a=int(input("enter a number = "))
if a%2==0:
    print("number is even")
else:
    print("odd number")    

####################################################################################

a=int(input("enter a number "))
if a>=5 and a<=15:
    if a%2==0:
        print("even")
    else:
        print("odd")
else:
    print("out of bound")


#####################################################################################

for i in range(1,20,2):
    print(i)