#This program selects unique elements from an array

elements = [10,7,3,30,3,7,1,100,29,29,100]
def getUniqueElements(elements):
    unique = []

    for number in elements:
        if number in unique:
            continue
        else:
            unique.append(number)
    return unique


print(getUniqueElements(elements))
