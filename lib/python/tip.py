print("press the button")
bill = float(input("What was the total bill? $"))

tip = int(input("tip u want to offer based on performance? 10, 12, or 15? "))

num_of_split = int(input("to whom u wanna offer? "))

calculate_bill = bill * (1 + (tip/100)) / num_of_split

final_amount = "{:.2f}".format(calculate_bill, 2)

if tip == 10:
        print(f"x person should pay: ${final_amount}")
elif tip == 12:
        print(f"x person should pay: ${final_amount}")
else:
        print(f"x person should pay: ${final_amount}")
