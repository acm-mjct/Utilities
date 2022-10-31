# -*- coding: utf-8 -*-
"""
Created on Fri Jan 24 20:08:57 2020

@author: adeeb
"""

import re,random as rd


while True:

  movie_name= input("Enter the Name of the Movie(without spaces): ")
  if not re.match("^[a-z]*$", movie_name):
      print ("Please enter only lower case letters") 
      
  elif len(movie_name) > 20:
      print ("Please enter upto 20 letters ") 
  else:
   break

while True:   
    try:
      chances =int(input("\nEnter number of chances, Mr. GameMaker:"))
      break
    except:
        print("\n \nPlease enter only numbers")

while True:   
    try:
      hints =int(input("\nEnter number of hints, Mr. GameMaker:"))
      break
    except:
        print("\n \nPlease enter only numbers")
        
def clear():    
    print(chr(27)+'[2j')         #To clear
    print('\033c')               #the python
    print('\x1bc')               #terminal

clear()

lol= list(movie_name)        #lol->list of letters
l=len(lol)
p=['*']*l
hused=0
posknown=[]

print(f"\nGame starts now. The number of letters is {len(lol)} \n {p} ")
print('--------------------------------------------------')
print('if you want a little help, type <hint> as your guess')

n=0 
while n<chances and n>(-1):
    while True:

        trial= input("\n\nMake your guess: ")
        if not re.match("^[a-z]*$", trial):
            print ("\nPlease enter a *LETTER* ") 
            continue
        elif len(trial) > 1:
            if trial=="hint":
                while hused<hints and len(posknown)<l:
                    if len(posknown)==l-1:
                        print("Sorry the last alphabet cannot be a hint")
                        break
                    hintpos=rd.randint(0,l-1)
                    while hintpos in posknown:
                        hintpos=rd.randint(0,l-1)
                    if hintpos not in posknown:
                        p[hintpos]=lol[hintpos]
                        lol[hintpos]=0
                        print(f"Progress so far: {p}")
                        posknown+=[hintpos]
                        hused+=1
                        print(f"you have used {hused} hints, only {hints-hused} left")
                    break
                else:
                    print("Sorry, you are out of hints")

            else:    
                print ("\nPlease enter just *ONE* letter") 
        else:
            break

    for i in lol:
        if i==trial:
            clear()
            print("\n\nWell done! you've guessed correctly.")
            position=lol.index(trial)+1
            print("The Letter '" + trial+ "' is on position " + str(position))
            lol[position-1]=0
            p[position-1]=trial
            posknown+=[position-1]
            print(f"\nProgress so far: {p}")
            if lol.count(trial)>0:
                print("\nHint: '" + trial+ "' occurs more time(s)")
            elif lol==[0]*l:
                n=chances
                print("\nYou.... Wiiinnnn!??!")
                print("\nOf course, I always had trust in you. Knew you could do it.\nYou are extremely Smart. Just like Adeeb.")
                break
            break
       
      
        if not trial in lol:
            clear()
            print("\n \nOh no, that letter is not in the name of the movie ")
            print(f"\nProgress so far: {p}")       
            n+=1
            left=chances-n
            print("\n\nNow you have only " + str(left) + " chances left")
            if left==0:
                print("\nAh, you've failed, but it's okay there is always a next time.")
            break
  
    
print("The name of the Movie is : "+ movie_name )
print("\n<Enter anything to exit>")
input("But first, tell me how do you rate the program? \n ")
