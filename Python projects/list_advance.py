import random

a = []

# create list of 10 random integers
for i in range(10):
    a.append(random.randint(1, 20))

print("original list =", a)

# even and odd numbers
b = []   # even
c = []   # odd

for i in a:
    if i % 2 == 0:
        b.append(i)
    else:
        c.append(i)

print("even numbers =", b)
print("odd numbers =", c)

# remove duplicates
d = []
for i in a:
    if i not in d:
        d.append(i)

print("after removing duplicates =", d)

# reverse without using reverse()
e = []
for i in range(len(a)-1, -1, -1):
    e.append(a[i])

print("reversed list =", e)

# second smallest and second largest
f = sorted(d)

if len(f) >= 2:
    print("second smallest =", f[1])
    print("second largest =", f[-2])
else:
    print("not enough elements")

# count occurrences
g = {}

for i in a:
    if i in g:
        g[i] += 1
    else:
        g[i] = 1

print("occurrences:")
for i in g:
    print(i, "=", g[i])