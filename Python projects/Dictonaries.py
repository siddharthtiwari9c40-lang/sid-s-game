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

# print( student['m.tech'] )
# print(student.get('b.tech',{}).get('st1',{}).get('name'))

# del student['b.tech']['st2']
# print( student )
 

# # for stream,info in student.items():
# #     print(f"stream: {stream}:")
# #     for student,values in info.items():
# #         print(f"student:{student}")
# #         for key,value in values.items():
# #             print(f"{key}:{value}")

# for name in student :
#     print ( name )

# for name in student :
#     print (f"{ name }:")
#     for key in student [ name ]:
        # print (f" {key }: { student [ name ][ key ]}")

####################################################################################################


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


