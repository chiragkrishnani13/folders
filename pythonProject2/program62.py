# WAP TO FIND OF ALL OCCURANCRE OF SUBSTRING
sent='today is the 17th day of the month and the month and the day is tuesday and the month is oct   '
pos=0
sub="the"
start=0
count=0

while pos!=-1:
    pos=sent.find(sub,start)
    if pos!= -1:
        count=count=1
        print(pos)
        start=pos+1
print(count)
