limit = input()

for i in range(2, int(limit)):
    count = 0
    for j in range(1,int(limit)+1):
        if i % j ==0:
            count+=1
    if count == 2:
        print (i, end =" ")
            
