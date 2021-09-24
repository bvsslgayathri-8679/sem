class circle:
    def __init__(self,radius):
        self.radius=radius
    def area(self):
        return 2*3.14*self.radius
    def perimeter(self):
        return 3.14*self.radius*self.radius
    
c1=circle(12)
c1.area()
print(circle.area(c1))
c1.perimeter()
print(circle.perimeter(c1))