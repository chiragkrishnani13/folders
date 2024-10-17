k=int(input("enter k"))
triplets=[]
for i in range(1,k):
    for j in range(1,k):
        if i<k and j<k and (i+j)<k:
            triplets.append([i,j,i+j])
        else:
            break
print(triplets)
