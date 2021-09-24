import java.util.*;
public class P2as{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int hr=sc.nextInt();
        int min=sc.nextInt();
        int sec=sc.nextInt();
        String time=sc.next().toLowerCase();
        if(hr<12 && time.equals("pm")){
            hr+=12;
        }
        else if(hr==12 && time.equals("pm")){
            hr=0;
        }
        System.out.printf("time is "+String.format("%02d:%02d:%02d",hr,min,sec));
    }
}