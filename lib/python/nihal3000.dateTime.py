from datetime import datetime

now = datetime.now()

print(now)

#classified format
dT = now.strftime("%D/%m/%y %H:%M:%S")
print(f'Date and time is {dT}')