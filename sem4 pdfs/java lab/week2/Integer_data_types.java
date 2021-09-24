import java.util.*;
import java.io.*;
public class Integer_data_types
{
    public static void main(String... arg)
    {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            try{
                long num=sc.nextLong();
                if(num>=Byte.MIN_VALUE && num<Byte.MAX_VALUE){
                    System.out.println("BYTE");
                }
                else if(num>Short.MIN_VALUE && num<Short.MAX_VALUE)
                {
                    System.out.println("SHORT");
                }
                else if(num >= Integer.MIN_VALUE && num <= Integer.MAX_VALUE)
                System.out.println("*int");
                else if(num >= Long.MIN_VALUE && num <= Long.MAX_VALUE)
                System.out.println("*long");
            }
            catch(Exception e){
                System.out.println("No integer databtype suits the input");
            }
        }
    }
}
