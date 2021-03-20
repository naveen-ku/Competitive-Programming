#code for reading files

from sys import argv


script, filename = argv
#file is opened and stored in variable txt
#The open() function opens the file (if possible) and returns a corresponding file object.
txt=open(filename)

print ("Here's your file %r"%filename)
#shows the content of the file 
print (txt.read())
txt.close()


#Method 2

print ("Type the filename again:")
file_again = raw_input(">")

txt_again= open(file_again)

#read only one line of file
print (txt_again.readline())
txt_again.close()

#In terminal type python
#Then to open and read any file type the following command\
#print ((open('filename.py')).read())