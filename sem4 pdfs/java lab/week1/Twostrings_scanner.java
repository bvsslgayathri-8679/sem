import java.util.Scanner;
class Twostrings_scanner
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String a=sc.nextLine();
        String b=sc.nextLine();
        sc.close();
        System.out.println("2 strings are "+a+" and "+b);
    }
}