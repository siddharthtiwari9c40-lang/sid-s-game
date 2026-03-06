# WAP to show working with sets. Demonstrate set union, intersect, set difference etc. operations. 

# a={1,2,3}
# b={2,3,4,5}

# print("union = ",a|b)

# print("intersect = ",a&b)

# print("difference = ",b.difference(a))

# print("symetric difference = ",a.symmetric_difference(b))

#  WAP to determine if Two Sets Are Disjoint.

a={1,2,3}
b={2,3,4,5}

if a.isdisjoint(b):
    print(a,"and",b,"are disjoint")
else:
    print(a,"and",b,"are not disjoint")