#Python program to generate multiplication table
number = int(input ("Enter a number :  "))        
print ("The Multiplication Table of: ", number)    
for count in range(1, 11):      
       print (number, 'x', count, '=', number * count)    
