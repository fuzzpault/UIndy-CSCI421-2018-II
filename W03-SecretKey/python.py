import sys
import library as l

s = "This is a long stringz"
s = "5"

for i in s:
    #print i
    sys.stdout.write(chr(  ord(i) + 1 ))
print "\n"

#s = 5  # 

print int(s) + 5

print float(3)/5
    
'''
this is 
a 
long 
comment
'''
print l.chunkText("this is a long string!? What is going OjjiN?")

#b("hi")

#print map(b, [5,8, 10])
