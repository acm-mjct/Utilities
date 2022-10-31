# Python3 code to demonstrate working of
# Convert String to Tuple
# using map() + tuple() + int + split()

# initialize string
test_str = "1, -5, 4, 6, 7"

# printing original string
print("The original string : " + str(test_str))

# Convert String to Tuple
# using map() + tuple() + int + split()
res = tuple(map(int, test_str.split(', ')))

# printing result
print("Tuple after getting conversion from String : " + str(res))
