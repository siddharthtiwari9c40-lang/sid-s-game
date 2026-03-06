# Create and manipulate strings: slicing, concatenation, find and replace. 
b = "siddharth"
a = "is awesome"
print("5th character of b:", b[4])
print("First 3 characters of b:", b[:3])
print("Full sentence:", b.capitalize() + " " + a)
print("After replace:", a.replace("is", "was"))
print("'is' found at index:", a.find("is"))

# WAP to check if a Given String is a Heterogram. 

# sentence = input("Enter a word : ")

# sentence = sentence.lower()
# if len(sentence) == len(set(sentence)):
#     print("Heterogram")
# else:
#     print("Not a Heterogram")

# WAP to read a line and print the statistics: No. of Uppercase, lowercase letters, digits and alphabets.

# a=input("enter a string of words and digits = ")
# dig=0
# cap=0
# low=0
# for i in a:
#     if i.isdigit():
#         dig+=1
#     if i.islower():
#         low+=1
#     if i.isupper() :
#         cap+=1
# print("no. of capital letters = ",cap)
# print("no. of small letters = ",low)
# print("no. of digits letters = ",dig)