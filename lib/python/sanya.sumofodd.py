# Python Program to Calculate Sum of Odd Numbers from 1 to N
 
maximum = int(input(" Please Enter the Maximum Value : "))
Oddtotal = 0

for number in range(1, maximum+1):
    if(number % 2 != 0):
        print("{0}".format(number))
        Oddtotal = Oddtotal + number

print("The Sum of Odd Numbers from 1 to {0} = {1}".format(number, Oddtotal)) 