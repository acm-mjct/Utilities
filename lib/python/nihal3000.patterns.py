space = 7
for i in range(1,8):
    for j in range(1,space):
        print(end = " ")
    space = space-1

    for j in range(1,i+1):
        print(j,end = " ")
    print("\r")