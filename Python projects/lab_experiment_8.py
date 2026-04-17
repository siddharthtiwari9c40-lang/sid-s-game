# WAP to accept some sentences from the user. Transfer all the sentences in a file ‘new’. Display all the content
# with open ('new.txt','w') as f:
#     f.write("hello there i am sid\n")
#     f.write("that is it\n")
#     f.write("I don't wnana say nothing else...")
# with open ('new.txt','r') as f:
#     f.seek(0)
#     print(f.read())

#################################################################################################

def frequent(file):
    with open(file, "r") as f:
        text = f.read().lower()
    
    words = text.split()
    
    freq = {}

    for i in words:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1

    max = 0
    word = ""

    for i in freq:
        if freq[i] > max:
            max = freq[i]
            word = i

    print("Most frequent word:", word)
    print("Count:", max)


frequent("new.txt")
