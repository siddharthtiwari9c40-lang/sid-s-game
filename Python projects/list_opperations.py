a=[3,2,1,5,4]

print(a[2])

a[1]=33
print(a)

a.append(6)
a.append(7)
print(a)

a.pop(1)
print(a)

a.sort()
print(a)

x=int(input("enter a number to search = "))
f=False
for i in range(len(a)):
    if x==a[i]:
        print("found at index = ",i)
        f=True
        break
if f==False:
    print("not found")
        

#####################################################################################################

a=[]
avg=0
for i in range(0,5):
    x=int(input("enter element of the list= "))
    a.append(x)
    avg+=x

max_val=a[0]
min_val=a[0]
max_pos=0
min_pos=0

for i in range(0,5):
    if a[i]>max_val:
        max_val=a[i]
        max_pos=i
    if a[i]<min_val:
        min_val=a[i]
        min_pos=i

print(a)
print("max value =",max_val,"position = ",max_pos)
print("min value =",min_val,"position = ",min_pos)
print("max - min = ",max_val-min_val)
print("avg = ",avg/5)
