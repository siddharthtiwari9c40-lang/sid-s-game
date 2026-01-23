for i in range(1,4):
    for j in range(1,3):
        print(i*j,end=" ")
        print(" ")


for i in range(3):
    for j in range(3):
        if i==j:
            print("#",end=" ")
        else:
            print("*",end=" ")    


for i in range(1,6):
    if i==3:
        continue
    print(i)
else:
    print("end")