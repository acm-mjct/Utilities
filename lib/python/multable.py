
def Mult_table_num(gven_numb, k):
  
    print(gven_numb, " X ", k, " = ", gven_numb * k)
    # Check if the k value is less than 10 using the if conditional statement.
    if (k < 10):
      # If the statement is true, then pass the given number and k+1 value as the arguments
      # to the Mult_table_num function.{Recursive Logic}
        Mult_table_num(gven_numb, k + 1)
# Give the number as user input using the int(input()) function and
# store it in a variable.
gven_numb = int(input("Enter some Random Number = "))
# Print the multiplication table of the given number using recursion.
print("The Multiplication Table of the above given number ", gven_numb, ":")
# Pass the given number and 1 as the arguments to the Mult_table_num function.
Mult_table_num(gven_numb, 1)