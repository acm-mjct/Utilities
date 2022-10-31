def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*factorial(n-1)

n=int(input("Enter The Number To Find Factorial: "))
print('factorial of a number is : ',factorial(n))
