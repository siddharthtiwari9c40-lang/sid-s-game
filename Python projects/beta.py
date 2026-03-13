x=open("happy.txt","a+")
a=x.write("\nhello i ma the fool")
print(a)

x.seek(0)
b=x.read()
print(b)