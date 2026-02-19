s=input("enter a string= ")
s=s.lower()

seen=[]
repeat=[]

for ch in s:
    if ch.isalpha():
        if ch in seen:
            if ch not in repeat:
                repeat.append(ch)
        else:
            seen.append(ch)

if len(repeat)==0:
    print(True)
else:
    print(False)
    print("repeated characters =",repeat)
