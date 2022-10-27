#Python program to add two numbers using functions
def addition(n1,n2):
    sum=n1+n2
    return sum

a=int(input("Enter first number :"))
b=int(input("Enter second number :"))
additionOfNumbers=addition(a,b)
print("The sum is",additionOfNumbers)
