import csv

total = 0

with open("inventory.csv","w", newline='') as f:
    writer= csv.writer(f)
    writer.writerow(["id","name","price","quantity"])
    writer.writerow([110,'pen',10,100])
    writer.writerow([111,'pencil',5,50])
    writer.writerow([112,'book',200,20])
    writer.writerow([113,'notebook',80,40])

with open("inventory.csv","r") as f:
    print(f.read())
    f.seek(0)
    reader = csv.reader(f)
    next(reader)

    for row in reader:
        id,name,price,quantity = row
        
        total += int(price) * int(quantity)

print("Total cost =", total)