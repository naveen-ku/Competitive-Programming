from sys import argv
#Run this

script, first, second, third = argv

#or this,one at a time

# script = argv[0]
# first = argv[1]
# second = argv[2]
# third = argv[3]


print ("The script is called: "), script
print ("Your first variable is: "), first
print ("Your second variable is: "), second
print ("Your thirs variable is: "), third

#playing with raw_input with argv
x=raw_input("name ")
y= script
print ("hello %s" %x)
print ("Hello", raw_input())
print ("Your file name is %s" %y)