# A Python program to generate squares from 1 
# to 100 using yield and therefore generator 
  
# An infinite generator function that prints 
# next square number. It starts with 1 

def next_square():
    i = 1

    while True:
        yield i*i
        i+=1

for square in next_square():
    if square > 100:
        break
    print (square)