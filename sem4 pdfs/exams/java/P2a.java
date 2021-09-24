import java.util.*;
import java.io.*;
class P2a{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        
        try{
            long l=sc.nextLong();
            if(l>=Byte.MIN_VALUE && l<=Byte.MAX_VALUE){
                System.out.println("input "+l+" is a byte value ");
            }
            else if(l>=Short.MIN_VALUE && l<=Short.MAX_VALUE)
            {
                System.out.println("input "+l+" is a short value ");

            }
            else if(l>=Integer.MIN_VALUE && l<=Integer.MAX_VALUE)
            {
                System.out.println("input "+l+" is a INT value ");
            }
            else if(l>=Long.MIN_VALUE && l<=Long.MAX_VALUE)
            {
                System.out.println("input "+l+" is a long value ");
            }
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}