# WAP TO FIND OF last OCCURANCRE OF SUBSTRING
sent = 'TODAY IS the 17th day of the month and the day is tuesday and the month ia oct '
pos = 0
sub = "the"

start = 0
last=-1

while pos != -1:
    pos = sent.find(sub, start)
    if pos != -1:
        start = pos + 1
        last=pos
print(last)
