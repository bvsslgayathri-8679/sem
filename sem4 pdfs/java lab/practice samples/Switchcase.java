import java.util.Scanner;
class Switchcase{
    public static void main(String arg[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String day=getday(n);
        System.out.println("week day is "+day);
        
    }
    public static String getday(int n){
        switch(n){
            case 0:
               return "Sunday";
               case 1:
               return "Monday"; 
               case 2:
               return "Tuesday"; 
               case 3:
               return "Wednesday"; 
               case 4:
               return "Thursday"; 
               case 5:
               return "Friday"; 
            case 6:
               return "Satday"; 
            case 7:
               return "Sunday"; 
            default:
                System.out.println("invalid inp");
                return " " ;
            }
            
    }
}
