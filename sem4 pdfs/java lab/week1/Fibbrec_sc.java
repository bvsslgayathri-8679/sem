import java.util.*;
class Fibbrec_sc{
    private static int fibbrec(int a){
        if(a==1||a==0)
        return 1;
        else
        return fibbrec(a-1)+fibbrec(a-2);
    }
    public static void main(String args[])
    {

        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println("0 is the 1st fibb series");
        for(int i=0;i<a-1;i++){
        System.out.println(fibbrec(i)+" is "+(i+1)+" th term fibb series");
    }
    }
}
