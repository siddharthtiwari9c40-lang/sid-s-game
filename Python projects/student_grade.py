a = []
b = []

for i in range(0, 5):
    x = input("enter your name = ")
    y = int(input("enter your marks = "))
    a.append(x)
    b.append(y)

avg = sum(b) / 5
print("avg marks = ", avg)

marks = max(b)
index = b.index(marks)
print("highest marks = ", marks, "student name = ", a[index])

students = list(zip(a, b))
students.sort(key=lambda x: x[1], reverse=True)

print("\nStudents sorted by marks (descending):")
for i in students:
    print(i[0], "-", i[1])

print("\nStudents who scored above average:")
for i in range(5):
    if b[i] > avg:
        print(a[i], "-", b[i])