# def add(a,b):
#     x=a+b
#     print(x)

# add(1,2)

# add= lambda x,y:x+y
# print(add(2,2))

# sq= lambda x:x**2
# print(sq(5))

# x=int(input("enter num 1 = "))
# y=int(input("enter num 2 = "))

# add= lambda x,y:x+y
# sub= lambda x,y:x-y
# multi = lambda x,y:x*y
# div= lambda x,y:x/y

# print(add(x,y))
# print(sub(x,y))
# print(multi(x,y))
# print(div(x,y))

# a= lambda x:x*x
# print(a(x))

# a= lambda x:x%2==0 
# if a(x):
#     print("even")
# else:
#     print("odd")

# a= lambda x,y: x>y
# if a(x,y):
#     print("1st is bigger")
# else:
#     print("2nd is bigger")

n=[1,2,3,4,5]
result = list(map(lambda x:x*x,n))
print(result)