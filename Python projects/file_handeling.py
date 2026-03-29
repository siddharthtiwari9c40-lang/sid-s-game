with open('marks.txt','w') as f:
    f.write("luffy , dsa , 17\n")
    f.write("zoro , python , 17\n")
    f.write("sanji , maths , 18\n")

with open('marks.txt','r') as f:
    print(f.read())

with open('marks.txt','a+') as f:
    f.write("nami , data science , 19\n")   
    f.seek(0)
    print(f.read())