import java.util.Scanner;
class Input{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter ur name ");
        String n1=sc.nextLine();
        System.out.println("enter ur salary");
        double sal=sc.nextDouble();
        System.out.println("Name of employee is " +n1+" with salary "+sal);
        
    }
}