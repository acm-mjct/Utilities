# input radius: 5
# output Area is 78.5500
def findArea(r):
	PI = 3.142
	return PI * (r*r);

# Driver method
radius=int(input("Enter the radius of a circle "))
print("Area is %.6f" % findArea(radius))
