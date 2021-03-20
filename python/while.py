numbers = []

#################__Either use this 
from sys import argv
script, digit , increment = argv

#################__Or this

# digit = raw_input("Type the limiter number: ")
# increment = raw_input("Type the number to be incremented each time the loop runs: ")
# print (increment)
# print (digit)

def list_append (digit, increment):
    i = 0
    print (digit)
    
    while i < int(digit):
        print ("At the top i is %d" %i)
        numbers.append(i)
        i+=int(increment)
        print ("Numbers now: ", numbers)
        print ("At the bottom i is %d "%i)

    # for i in range(0,int(digit)):
    #     i+=int(increment)
    #     print ("At the top i is %d" %i)
    #     numbers.append(i)
        
    #     print ("Numbers now: ", numbers)
    #     print ("At the bottom i is %d "%i)

print ("The numbers: ")
for num in numbers:
    print (num)

list_append(digit, increment)


