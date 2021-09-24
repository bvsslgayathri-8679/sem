class person:
    def __init__(self,name,age,height,weight):
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight
    def get_bmi(self):
        h=self.height/100
        bmi=self.weight/h**2
        if bmi<18.5:
            return 'person {0} is underweight'.format(self.name)
        elif bmi>18.5 and bmi<25:
            return 'person {0} is healthy'.format(self.name)
        else:
            return 'person {0} is overweight'.format(self.name)


        


p1=person(input(),int(input()),float(input()),float(input()))
print(p1.get_bmi())        