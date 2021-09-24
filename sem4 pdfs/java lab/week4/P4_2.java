import java.util.*;
class P4_2{
    public static void main(String... arg){
    float a,b;
    int c,d;
    Scanner sc=new Scanner(System.in);
    a=sc.nextFloat();
    b=sc.nextFloat();
    c=sc.nextInt();
    d=sc.nextInt();
    Calculator mycal=new Calculator();
    System.out.println("Power double function "+mycal.powerDouble(a,b));
    System.out.println("Power int function "+mycal.powerInt(c,d));
    System.out.println("Number of times object is created "+mycal.count);


}
}
class Calculator{
    static int count=0;
    Calculator(){
        ++count;
    }
    public static double powerDouble(double num1,double num2){
        return Math.pow(num1,num2);
    }
    public static int powerInt(int num1,int num2){
        double k=Math.pow(num1,num2);
        int p=1;
        for(int i=1;i<=num1;i++){
            p*=num2;
        }
        return p;
    }
}
