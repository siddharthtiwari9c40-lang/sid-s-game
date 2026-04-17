with open ('new.txt','w') as f:
    f.write("hello there i am sid\n")
    f.write("that is it\n")
    f.write("I don't wnana say nothing else...")
with open ('new.txt','r') as f:
    f.seek(0)
    print(f.read())
