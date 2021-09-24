import java.util.Scanner;
public class Manvi {
    public static void main(String... s){
        Scanner sc=new Scanner(System.in);
        int h=sc.nextInt();
        int m=sc.nextInt();
        int sec=sc.nextInt();
        String str1=sc.next();
        if((str1.equals("pm")||str1.equals("PM"))&&(h!=12))
        { 
           h+=12;
        }
        if((str1.equals("AM")||str1.equals("am"))&&(h==12))
        {
            h=0;
        }
        System.out.printf("%02d:%02d:%02d",h,m,sec);
        sc.close();
    }
}