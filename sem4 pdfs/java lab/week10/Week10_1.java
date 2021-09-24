import java.util.*;
class Week10_1{
	public static void main(String... arg){
		Scanner sc=new Scanner(System.in);
		int a,b,c;
		try{
		a=Integer.parseInt(sc.next());
		b=Integer.parseInt(sc.next());
		System.out.println(a/b);
		}
		catch(NumberFormatException e){
		System.out.println("number format error "+e);
		}
		catch(ArithmeticException e){
			System.out.println("Arithemetic expression error "+e);
	}
	}
}