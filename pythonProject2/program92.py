roll=input().split()
mid_term_marks=input().split()
roll_nos=(input()).split()
conti_assement=input().split()
data=dict()
data2=dict()
for i in range(len(roll)):
    data[roll[i]]=mid_term_marks[i]
for i in range(len(roll_nos)):
    data2[roll_nos[i]]=conti_assement[i]
data.update(data2)
print(data)
