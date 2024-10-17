items=int(input("how many item you purchased "))
amount=int(input('ENTER YOUR AMOUNT '))
if items>=5:
    if amount>=5000:
        amount = amount - 0.08*amount
    elif amount>=300:
          amount = amount - 0.04*amount
elif items>=3:
    if amount>7000:
        amount = amount - 0.10*amount

    elif amount>=4000:
        amount = amount - 0.06*amount
else:
    if amount>=8000:
        amount = amount - 0.07*amount
    elif amount >=2000:
          amount = amount - 0.02*amount

amount = amount + 0.05*amount
print(amount)




