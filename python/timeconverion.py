time = input()
hour = int(time[:2])
minute = int(time[3:5])
seconds = int(time[6:8])
day = time[8:11]
colon =':'


if ((day == 'AM' or day =='PM') and hour == 12):
    hour = 00
    print(hour,colon,minute,colon,seconds)
    
elif (day == 'AM' and hour < 12):
    print(hour,colon,minute,colon,seconds)
    
elif (day == 'PM' and hour > 12):
    hourS= hour + 12
    print( hour,colon,minute,colon,seconds)
    
else:
    pass


    
