n = int(input("how many lines= "))

for i in range(1, n+1):
    print(" "*(n-i) + "*"*i)


################################################################
#upside down

for i in range(n, 0, -1):
    print(" "*(n-i) + "*"*i)