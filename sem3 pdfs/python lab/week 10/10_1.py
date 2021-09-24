class Person:
    def __init__(self,name,age,weight,height):
        self.name=name
        self.age=age
        self.weight=weight
        self.height=height
    def get_bmi_result(self):
        h=self.height/100
        bmi=self.weight/(h**2)
        if bmi<=18.5:
            return "\n---------\nYour report\nname:{0}\nage:{1}\nweight:{2}\nheight:{3}\n STATUS: Under-weight".format(self.name,self.age,self.weight,self.height)
        elif bmi>18.5 and bmi<25:
            return "\n---------\nYour report\nname:{0}\nage:{1}\nweight:{2}\nheight:{3}\n STATUS: Healthy".format(self.name,self.age,self.weight,self.height)
        elif bmi>=25:
            return "\n---------\nYour report\nname:{0}\nage:{1}\nweight:{2}\nheight:{3}\n STATUS: Over-weight".format(self.name,self.age,self.weight,self.height)


p1=Person(input("name: "),int(input("age ")),float(input("weight ")),float(input("height ")))
p1.get_bmi_result()
print(Person.get_bmi_result(p1))
