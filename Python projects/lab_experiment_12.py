try:
    # Taking input
    num1 = int(input("Enter 1st number: "))
    num2 = int(input("Enter 2nd number: "))
    
    # Division
    result = num1 / num2
    
    print("Result =", result)

# Handles division by zero
except ZeroDivisionError:
    print("Error: Can't divide by zero")

# Handles invalid input (like letters instead of numbers)
except ValueError:
    print("Error:Please enter valid numbers")

# Runs if no exception occurs
else:
    print("Division successful")

# Always executes
finally:
    print("Program ende.")