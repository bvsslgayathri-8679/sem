import java.util.*;
class P10a{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int num1,num2;
        try{
            num1=Integer.parseInt(sc.next());
            num2=Integer.parseInt(sc.next());
            System.out.println(num1/num2);            
        }
        catch(ArithmeticException e){
            System.out.println("div by 0 error ");
        }
        catch(NumberFormatException e){
            System.out.println("num format exception ");
        }
    }
}