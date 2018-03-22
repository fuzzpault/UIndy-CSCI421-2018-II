# tkinterDemo.py
# Paul Talaga
# March 21, 2018
# Demo of using tkinter to build a simple calculator.
from Tkinter import *

def bclicked(event = None):
  output['text'] = str(output['text']) + str(event.widget.value)
  
def calculate(event = None):
  output['text'] = eval(output['text'])
  
def clear(event = None):
  output['text'] = ""

master = Tk()

# Where the numbers & result will go
output = Label(master,text = "")
output.grid(column = 0, row = 0, columnspan = 3)

# Generate the numbers
buttons = []
for n in range(9):
  b = Button(master, text=str(n+1))
  b.grid(column = n % 3, row = n / 3 + 1)
  # Note value is not a member variable of the Button object, but in 
  # python we can add members at any time.
  # This allows all numbers to use the same callback, and it can find
  # what button was pressed.
  b.value = n + 1
  b.bind('<Button>', bclicked)
  buttons.append(b)
  
b = Button(master, text=0)
b.grid(column = 1, row = 4)
b.value = 0
b.bind('<Button>', bclicked)
buttons.append(b)
  
# Include the operator buttons
add = Button(master, text="+")
add.grid(column = 0, row = 5)
add.value = '+'
add.bind("<Button>", bclicked)

sub = Button(master, text="-")
sub.grid(column = 1, row = 5)
sub.value = '-'
sub.bind("<Button>", bclicked)

mul = Button(master, text="*")
mul.grid(column = 2, row = 5)
mul.value = '*'
mul.bind("<Button>", bclicked)

calc = Button(master, text="Enter")
calc.grid(column = 0, row = 6, columnspan=3)
calc.bind("<Button>", calculate)

cl = Button(master, text="Clear")
cl.grid(column = 0, row = 7, columnspan=3)
cl.bind("<Button>", clear)


mainloop()
  
