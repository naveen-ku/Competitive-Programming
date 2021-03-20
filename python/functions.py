#this one is like your scripts with argv
from sys import argv
script, argv1, argv2 = argv

def print_two(*args):
    arg1, arg2 = args
    print ("arg1: %r, arg2: %r" %(arg1,arg2))

#ok, that *args is actually pointlrss, we can just do this

def print_two_again(arg1, arg2):
    print ("arg1: %r, arg2: %r" %(arg1, arg2))

#this just takes one argument

def print_one(arg1):
    print ("arg1: %r" %arg1)


#this one takes no arguments

def print_none():
    print ("I got nothing")


print_two(argv1,argv2)
print_two_again("hi","there")
print_one("hello")
print_none()