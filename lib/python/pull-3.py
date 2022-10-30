import random
fruits_in_store = ['apple','mango','orange','pineapple','fig','grapes','guava','litchi','almond'] 
print('items available in store :')
print(fruits_in_store)
my_cart = []
for i in range(4):
    #selecting a random index
    temp = int(random.random()*len(fruits_in_store))
    # adding element at random index to new list
    my_cart.append(fruits_in_store[temp])
    # removing the add element from original list
    fruits_in_store.pop(temp)  
print('items successfully added to cart:')
print(my_cart)