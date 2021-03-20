def add(a, b):
    print ("Adding %d+%d"%(a,b))
    return (a+b)

def subtract(a,b):
    print ("Subtracting %d-%d"%(a,b))
    return a-b

def multiply(a, b):
    print ("Multiplying %d*%d"%(a,b))
    return (a*b)

def divide(a, b):
    print ("Dividing %d/%d"%(a,b))
    return (a/b)

def random(a):
    return(a)

print("Let's do some maths with just functions!")

age = add(15,5)
height = subtract(75,3)
weight = multiply(14,4)
iq = divide(134,2)
random_string = raw_input('Type the string: ')

print ("Age: %d, Height: %d, Weight: %d, IQ: %d"%(age,height,weight,iq))
print (random_string)
print ("Here is a puzzle")

what = add(age,subtract(height,multiply(weight,divide(iq,2))))

print ("That becomes: ",what, "Can you do it by hand?")

