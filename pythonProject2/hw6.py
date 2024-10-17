sen=input("enter a sentence:").split()
k=input("enter k:")
data=sen[1]
start=0
end=k
while start<len(data):

    print(sen[start,end],end=" ")
    start=start+k
    end=end+k
