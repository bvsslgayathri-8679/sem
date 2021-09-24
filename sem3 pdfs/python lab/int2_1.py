class area_per(object):
    def __init__(self,r):
        self.r=r
    def cal(self):
        return 'area is {0} and perimeter is {1} '.format(3.14*self.r*self.r,2*3.14*self.r)


r=area_per(float(input()))
print(r.cal())
