tasks=[]

while True:
    print("\n1.Add task")
    print("2.Remove task")
    print("3.View tasks")
    print("4.Mark task as completed")
    print("5.Clear all tasks")
    print("6.Total number of tasks")
    print("7.Exit")

    ch=int(input("enter choice= "))

    if ch==1:
        t=input("enter task= ")
        tasks.append(t)
    elif ch==2:
        name=input("enter task name to remove= ")
        if name in tasks:
            tasks.remove(name)
        else:
            print("task not found")
    elif ch==3:
        if len(tasks)==0:
            print("no tasks")
        else:
            for i in range(len(tasks)):
                print(i+1,".",tasks[i])
    elif ch==4:
        name=input("enter task to mark done= ")
        if name in tasks:
            i=tasks.index(name)
            tasks[i]=tasks[i]+" [DONE]"
        else:
            print("task not found")
    elif ch==5:
        tasks.clear()
        print("all tasks cleared")
    elif ch==6:
        print("total tasks =",len(tasks))

    elif ch==7:
        break
    else:
        print("invalid choice")
