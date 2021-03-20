# create a mapping of state to abbreviations
states = {
    'Oregon': 'OR',
    'Florida': 'FL',
    'California': 'CA',
    'New York':'NY',
    'Michigan':'MI'
}

# create a basic set of states and some cities in them
cities = {
    'CA':'San Francisco',
    'MI':'Detroit',
    'FL':'Jacksonville'
}

# add some more cities
cities['NY'] = 'New York'
cities['OR'] = 'Portland'

# print out some cities
print ('_' * 10)
print ('NY State has: ',cities['NY'])
print ('OR State has: ',cities['OR'])

# print some state
print ('_' * 10)
print ("Michigan's abbreviation is: ", states['Michigan'])
print ("Florida's abbreviation is: ", states['Florida'])

# do it by using the state then cities dict
print ('_' * 10)
print ('Michigan has: ', cities[states['Michigan']])
print ('Florida has: ', cities[states['Florida']])


#print every state abbreviation
print ('_' * 10)
for states, abbrev in states.items():
    print ("%s is abbreviated %s" %(states, abbrev))