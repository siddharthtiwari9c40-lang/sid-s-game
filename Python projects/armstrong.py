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