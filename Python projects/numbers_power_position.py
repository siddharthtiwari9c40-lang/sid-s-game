def digit_power_sum(a):
    a=str(a)
    t=0
    for i in range(len(a)):
        d=int(a[i])
        p=i+1   
        t=t+(d**p)
    
    return t


a=int(input("enter a 3 digit number = "))
print(digit_power_sum(a))
