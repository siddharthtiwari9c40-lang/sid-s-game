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

print( student['m.tech'] )
print(student.get('b.tech',{}).get('st1',{}).get('name'))

del student['b.tech']['st2']
print( student )