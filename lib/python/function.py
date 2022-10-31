def function(one,two):
    print('this is how you enter a function!')
    print(one+two)



class NewClass:

    def __init__(self,x,y):

        self.x=x
        self.y=y   

    def change(self,newx,newy):
        self.x=newx
        self.y =newy


    def add(self):

        return self.x+self.y



p = NewClass(1,2)

print(p.x,p.y)
print("changes!!!")
p.change(3, 4)
print(p.x,p.y)