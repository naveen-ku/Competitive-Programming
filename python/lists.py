from sys import exit

def gold_room():
    print ("This room is full of gold. How much do you take")

    next = input(">" )
    if next.isalpha():
        dead ("Man, learn to type a number.")
    else:
        how_much = int(next)

    if how_much <50:
        print ("nice,you're not greedy, you win !")
        exit(0)
    else:
        dead ("You greedy bastard")

def bear_room():
    print ("There is a bear here.")
    print ("The bear has a bunch of honey")
    print ("The fat bear is in front of another door.")
    print ("How are you going to move the bear ?")
    bear_moved = False

    while True:
        next = input("> ")

        if next.lower() == "take honey":
            dead ("The bear loooks at you then slaps your face off")
        elif next.lower() == "taunt bear" and not bear_moved:
            print ("The bear has moved from the door. You can go through it now")
        elif next.lower() == "open door":
            gold_room()
        else:
            print ("I got no idea what it means.")

def cthulhu_room():
    print ("There you see great evil Cthulhu")
    print ("He, it, whatever stares at you and you go insane.")
    print ("Do you flee for your life or eat your head?")

    next = input("> ")

    if "flee" in next:
        start()
    elif "head" in next:
        dead("well that was nasty!!")
    else:
        cthulhu_room()

def dead(why):
    print (why , "Good job!")
    exit(0)

def start():
    print ("You are in a dark room.")
    print ("There is a door to your right and left.")
    print ("Which one do you take?")

    next = input("> ")

    if next == "left":
        bear_room()
    elif next == "right":
        cthulhu_room()
    else:
        dead ("You stumble around the room until you starve.")


start()