#Python program to convert a given string into Tuple
a = "computer"
print ("The string is : " )
print(a)
result = tuple(map(str, a.split()))
print("The tuple after converting from a string is : ")
print(result)
print(type(result))