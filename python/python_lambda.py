#A lambda function is a small anonymous function.

#A lambda function can take any number of arguments, but can only have one expression.


x = lambda a : a + 10
print(x(5))

y = lambda a , b : a + b
print(y(4,5))

z = lambda a , b, c : a+b+c
print(z(3,4,5))


print ("function and lambda combined")
print ("Type the number to be doubled")
double_num = input ("> ")

def myfunc (n):
    return lambda a : a * n

double_value = myfunc(2)
print (double_value(int(double_num)))




