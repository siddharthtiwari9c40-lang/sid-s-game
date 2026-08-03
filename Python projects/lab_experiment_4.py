#WAP to show various list operations:creation,access an element,update,delete,sort,search an element
a=[1,3,2,5,4]

print("list= ",a)
print("second element of the list ",a[1])

a.append(7)
print("list after appending ",a)

a.insert(2,33) 
print("list after inserting an element at 3rd position ",a)

a.remove(33)
print("deleting element from list ",a)

a.sort()
print("sorting list ",a)

b=int(input("enter the number to be searched in the list: "))
if b in a:
    print("found")
else:
    print("not found")    

#Write a Python program find the maximum and minimum of a list of numbers. 
a=[1,3,2,5,4]

print("max in list: ",max(a))
print("min in list: ",min(a))