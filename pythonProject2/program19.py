units = int(input("enter no of units consumed:"))
bill = 0

if units > 200:
    bill = 200 * 13
    units = units - 200
    if units > 100:
        bill = bill + 100 * 16
        units = units - 100
        if units > 100:
            bill = bill + 100 * 18
            units = units - 100
            bill = bill + units * 20
        else:
            bill = bill + units * 18
    else:
        bill = bill + units * 16
else:
    bill = bill + units * 13
print(bill)
