#PRINTING THE ABSOLUTE DIFFERENCE OF DIAGONAL ELEMENTS OF A MATRIX

n = int(input())
sum1 = 0
sum2 = 0
matrix = []

for j in range(n):      # A for loop for column entries 
    a= list(map(int,input().split()))
    if len(a) !=n:
        exit()
    matrix.append(a)    #Appending list in an empty list
#    print(matrix)

# for i in range(n):
#         for j in range(n):
#                 print (matrix[i][j], end=" ")
#         print()

for i in range(n):
    for j in range(n):
        if i == j :
            sum1 += matrix[i][j]
        if (i + j == (n-1)):
            sum2 += matrix[i][j]

ans = abs(sum1-sum2)
print(ans)
        
