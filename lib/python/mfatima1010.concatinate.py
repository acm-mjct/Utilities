# Two strings can be concatenated in Python by the following ways:
# Using ‘+’ operator
# Using % operator
# Using join() 
# Using format()

#Method 1
a = "Hello"
b = "How are you"
c=a+b
string=a+" "+b
print(string)

#Method 2
d = "Hello"
e = "How are you"
f="%s %s"%(d,e)
print(f)

#Method 3
g= "Hello"
h= "How are you"
str=" ".join([g,h])
print(str)

#Method 4
i= "Hello"
j= "How are you"
s="{} {}".format(i,j)
print(s)
