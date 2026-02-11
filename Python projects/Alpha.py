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
 

# for stream,info in student.items():
#     print(f"stream: {stream}:")
#     for student,values in info.items():
#         print(f"student:{student}")
#         for key,value in values.items():
#             print(f"{key}:{value}")

for name in student :
    print ( name )

for name in student :
    print (f"{ name }:")
    for key in student [ name ]:
        print (f" {key }: { student [ name ][ key ]}")

