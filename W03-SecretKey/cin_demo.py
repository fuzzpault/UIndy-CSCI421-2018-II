
import sys

if len(sys.argv) <= 1:
    print "I need a key!"
    sys.exit(1)
    
key = int(sys.argv[1])

text = ""

if len(sys.argv) == 2:
    # get input from keyboard
    text = sys.stdin.read()
else:
    #file = open(sys.argv[2])
    #text = file.read()
    #file.close()
    # or do this (which is a better habit)
    with open(sys.argv[2]) as file:
        text = file.read()
    
print text