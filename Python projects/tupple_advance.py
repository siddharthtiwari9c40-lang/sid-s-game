# create tuple of 10 mixed numbers
a = (10, -5, 7, -2, 15, -9, 4, -1, 8, -6)

print("tuple =", a)

# sum, average, max, min
s = sum(a)
avg = s / len(a)
mx = max(a)
mn = min(a)

print("sum =", s)
print("average =", avg)
print("maximum =", mx)
print("minimum =", mn)

# count positive and negative numbers
p = 0
n = 0

for i in a:
    if i > 0:
        p += 1
    elif i < 0:
        n += 1

print("positive numbers =", p)
print("negative numbers =", n)

# find index of user-specified element
x = int(input("enter element to find index = "))

if x in a:
    print("first occurrence index =", a.index(x))
else:
    print("element not found")

# convert tuple to list, modify, convert back
b = list(a)
print("converted to list =", b)

b.append(100)   # modifying list
print("modified list =", b)

a = tuple(b)
print("converted back to tuple =", a)

# demonstrate tuple immutability
try:
    a[0] = 999
except TypeError:
    print("tuples are immutable (cannot change elements)")