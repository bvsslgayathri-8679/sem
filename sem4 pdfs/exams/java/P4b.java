class P4b{
    public static void main(String... arg){
    Calculator c1=new Calculator();
    System.out.println(c1.powerInt(2,3));
    
    Calculator c2=new Calculator();
    Calculator c3=new Calculator();
    System.out.println(c2.powerDouble(2.3,4.5));
    System.out.println(c3.count);
    }
}
class Calculator{
    public static int count=0;
    Calculator(){
        count+=1;
    }
    static int powerInt(int num1,int num2){
        int p=1;
        for(int i=0;i<num1;i++){
            p=p*num2;
        }
        return p;
    }
    static double powerDouble(double num1,double num2){
        return Math.pow(num1,num2);
    }
}
