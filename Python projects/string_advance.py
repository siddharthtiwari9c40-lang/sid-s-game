a = input("enter a sentence = ")

print("\noriginal sentence =", a)


total = len(a)

v = 0   
c = 0   
d = 0   
s = 0   

for i in a:
    if i.isalpha():
        if i.lower() in "aeiou":
            v += 1
        else:
            c += 1
    elif i.isdigit():
        d += 1
    elif not i.isspace():
        s += 1

print("\ntotal characters =", total)
print("vowels =", v)
print("consonants =", c)
print("digits =", d)
print("special characters =", s)


b = ""
for i in a:
    if i != " ":
        b += i.lower()

if b == b[::-1]:
    print("it is a palindrome")
else:
    print("it is not a palindrome")

print("\nuppercase =", a.upper())
print("lowercase =", a.lower())
print("title case =", a.title())
print("swap case =", a.swapcase())


words = a.split()
long = ""

for i in words:
    if len(i) > len(long):
        long = i

print("\nlongest word =", long)


h = ""
flag = True

for i in a.lower():
    if i.isalpha():
        if i in h:
            flag = False
            break
        else:
            h += i

if flag:
    print("it is a heterogram")
else:
    print("it is not a heterogram")