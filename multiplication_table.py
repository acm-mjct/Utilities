number = int(input ("Enter the number of which the user wants to print the multiplication table: "))      
# We are using "for loop" to iterate the multiplication n times 
rg = int(input("enter the range"))
print ("The Multiplication Table of: ", number)    
for count in range(1,rg+1):      
   print (number, 'x', count, '=', number * count)   
