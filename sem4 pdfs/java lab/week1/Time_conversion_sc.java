import java.util.*;
class Time_conversion_sc{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int hr=sc.nextInt();
        int min=sc.nextInt();
        int sec=sc.nextInt();   
        String ampm=sc.next();
        if((ampm.equals("pm")||ampm.equals("PM")) && hr<12)
        {
            hr=hr+12;
             
        }
        if((ampm.equals("pm")||ampm.equals("PM")) && hr==12)
        {
            hr=0;
             
        }
        
        /*System.out.printf("time in 24 hrs is %02d: %02d : %02d ",hr,min,sec);
        System.out.println();
        System.out.format("time in 24 hrs is %02d: %02d : %02d ",hr,min,sec);
        System.out.println();*/
        System.out.printf("time in 24 hrs is "+String.format("%02d:%02d:%02d",hr,min,sec));
    }
}