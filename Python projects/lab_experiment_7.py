student = {
    'b.tech':{
        'st1':{'name':'sid','age':19},
        'st2':{'name':'sumit','age':19}
    },
    'm.tech':{
        'ai':{
            'st1':{'name':'sid','age':19}
        },
        'ds':{
            'st2':{'name':'sumit','age':19}
        }
    }
 }


print("Dictionary Items:")
for stream, info in student.items():
    print(stream, ":", info)



print("\nAccessing Items:")
print("m.tech data =", student['m.tech'])
print("b.tech st1 name =", student['b.tech']['st1']['name'])



print("\nget:")
name = student.get('b.tech', {}).get('st1', {}).get('name')
print("Name using get() =", name)

print("\nChange Values:")
student['b.tech']['st1']['age'] = 20
print("Updated age =", student['b.tech']['st1'])


print("\nLength:")
print("Number of main streams =", len(student))


