#Program to slice the list a = [3,5,4,7,33,17] to 4 elements
#Done by slice() method
# slice() function Syntax:
# slice(start, stop, step)
# Parameters: 
# start: Starting index where the slicing starts.
# stop: Ending index.
# step: It is an optional argument that determines the increment between each index for slicing.
#If only one parameter is passed, then start and step is considered to be None.



a = [3,5,4,7,33,17]
x = slice(0, 4)
print(a[x])
