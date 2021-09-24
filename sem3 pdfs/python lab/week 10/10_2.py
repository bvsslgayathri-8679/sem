class circle:
    def __init__(self,radius):
        self.radius=radius
    def perimeter(self):
        return 2*3.14*self.radius

    def area(self):
        return 3.14*self.radius*self.radius



c1=circle(float(input("radius of circle: ")))
c1.area()
print("Area of circle is ",circle.area(c1))
c1.perimeter()
print("Perimeter of circle is ",circle.perimeter(c1))