
string = "!@#$%^&*()-_+=[]\|;:,./?"
numbers = "0123456789"
Alphabet = " abcdefghijklmnopqrstuvwxyz"
Alphabet = Alphabet + Alphabet.upper()
a=""
print("I'm gonna generate a sequence of characters")

for i in range(111):

    a=a+(string[i%13])
    a=a+(numbers[(i+3)%7])
    a=a+(Alphabet[i%53])

print(a)