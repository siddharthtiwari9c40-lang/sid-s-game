a="hi my name is siddharth but my friends call me sid"
b="aeiou"
j=0
for i in a:
    if i in b:
        print(i)
        j+=1
print("vovles are: ",j)
        
colors = (" red ", " green ", " blue ")
for i in colors :
    print ( i )       
matrix = [
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]
for row in matrix :
    for element in row :
        print ( element , end=" ")
    print () 