items = []

while True:
    print("\n1.Add item")
    print("2.Remove item")
    print("3.View items")
    print("4.Check if item exists")
    print("5.Clear all items")
    print("6.Total number of items")
    print("7.Exit")

    try:
        ch = int(input("enter choice = "))
    except:
        print("invalid input")
        continue

    if ch == 1:
        name = input("enter item name = ")
        items.append(name)
        print("item added")

    elif ch == 2:
        name = input("enter item name to remove = ")
        if name in items:
            items.remove(name)
            print("item removed")
        else:
            print("item not found")

    elif ch == 3:
        if len(items) == 0:
            print("no items in list")
        else:
            for i in range(len(items)):
                print(i+1, ".", items[i])

    elif ch == 4:
        name = input("enter item name to check = ")
        if name in items:
            print("item is in the list")
        else:
            print("item not found")

    elif ch == 5:
        items.clear()
        print("all items cleared")

    elif ch == 6:
        print("total items =", len(items))

    elif ch == 7:
        print("exiting program")
        break

    else:
        print("invalid choice")