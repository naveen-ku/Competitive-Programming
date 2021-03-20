def cheese_and_crackers (cheese_count, boxes_of_crackers):
    print ("You have %s cheeses! "%cheese_count)
    print ("You have %d boxes of crackers!"%boxes_of_crackers)
    print ("Man that's enough for a party!")
    print ("Get a blanket.\n")

print ("We can just give the function numbers directly: ")
cheese_and_crackers(20, 30)

amount_of_cheese = 10
amount_of_crackers = 50

cheese_and_crackers(amount_of_cheese, amount_of_crackers)

print ("We can even do the math inside too: ")
cheese_and_crackers(90-74,03+83)

print ("And we can combine the two: vatiable and math: ")
cheese_and_crackers(amount_of_cheese+10, amount_of_crackers-5)


arg1=int(raw_input("Amount of cheese:"))
arg2=int(raw_input("Amount of boxes of crackers: "))

if(arg1>0 and arg2>0):
    cheese_and_crackers(arg1, arg2)
else:
    print ("Type positive numbers.")