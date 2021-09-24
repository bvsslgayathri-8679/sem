class person:
    def __init__(self,name,age,weight,height):
        self.name=name
        self.age=age
        self.weight=weight
        self.height=height
    
    def get_bmi_result(self):
        h=self.height/100
        bmi=self.weight/(h**2)
        if bmi<=18.5:
            return "your details\nname:{0}\nage:{1}\nweight:{2}\nheight:{3}\nstatus:underweight".format(self.name,self.age,self.weight,self.height)
        elif bmi>18.5 and bmi<25:
            return "your details\nname:{0}\nage:{1}\nweight:{2}\nheight:{3}\nstatus:healthy".format(self.name,self.age,self.weight,self.height)
        elif bmi>=25:
            return "your details\nname:{0}\nage:{1}\nweight:{2}\nheight:{3}\nstatus:overweight".format(self.name,self.age,self.weight,self.height)
    

p1=person(input(),int(input()),float(input()),float(input()))
p1.get_bmi_result()
print(person.get_bmi_result(p1))