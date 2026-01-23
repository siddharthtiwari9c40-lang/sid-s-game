print("enter 1 for addition\nenter 2 for subtract\nenter 3 for multiply\nenter 4 for divide")
num = input("what is your choice ") 
num1 =float(input("enter the first number "))
num2 = float(input("enter the second number "))
match num:
    case "1":
        print("addition")
        print("result = ",num1 + num2)
    case "2":
        print("subtraction")
        print("result = ",num1 - num2)
    case "3":
        print("multiplication")
        print("result = ",num1 * num2)
    case "4":
        print("devision")
        print("result = ",num1 / num2)    
