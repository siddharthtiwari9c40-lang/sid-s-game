read = 4
write = 2
execute = 1

p = 0   

p = p | read
p = p | write
print("permission value =", p)

if p & read:
    print("read allowed")
else:
    print("read not allowed")

p = p | execute
print("after adding execute =", p)

p = p ^ write
print("after removing write =", p)
