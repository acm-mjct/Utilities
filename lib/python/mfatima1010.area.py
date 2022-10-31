#Python program to find the area of a circle
import math  
      
def area(Radius):   
        area = Radius** 2 * math.pi  
        return area  
      
Radius = float (input ("Please enter the radius of the given circle: "))  
print (" The area of the given circle is: ", area(Radius))  