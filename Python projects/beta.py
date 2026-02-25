# sentence = input("Enter a word or sentence: ")

# sentence = sentence.lower()
# if len(sentence) == len(set(sentence)):
#     print("Heterogram")
# else:
#     print("Not a Heterogram")

from random import randint
x=int(input("enter your guess = "))
a=randint(0,10)
if x==a :
    print("yes you got it !!")
else:
    print("boooo!!!")
    print("right ans = ",a)