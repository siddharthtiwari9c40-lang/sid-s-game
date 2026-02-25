num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))



print("num1 == num2 :", num1 == num2)
print("num1 != num2 :", num1 != num2)
print("num1 > num2  :", num1 > num2)
print("num1 < num2  :", num1 < num2)
print("num1 >= num2 :", num1 >= num2)
print("num1 <= num2 :", num1 <= num2)


if num1 == num2:
    print("Both numbers are equal.")
elif num1 > num2:
    print("First number is greater than second number.")
else:
    print("First number is smaller than second number.")