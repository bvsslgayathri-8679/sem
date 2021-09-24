
import java.util.*;
class Week10_2{

public static void main(String... arg){
	try
        {
        	Scanner sc=new Scanner(System.in);
			divisible(sc.nextInt());
            
        }
        catch (Exception e)
        {
            System.out.println(e);
  
        }
}
public static void divisible(int a) throws divisiblebytwoException {
	if(a%2!=0){
		throw new divisiblebytwoException("not divisible by 2");
	}
	else{
	    System.out.println(a+" is divisible by 2");
	}
	
}
}
class divisiblebytwoException extends Exception{
divisiblebytwoException(String s){
	System.out.println(s);
	
}
}
