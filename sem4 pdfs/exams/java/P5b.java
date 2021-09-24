import java.util.*;
class P5b{
    
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String s[]=new String[n+1];
        for(int i=0;i<n+1;i++){
            s[i]=sc.nextLine();
        }
        for(int i=0;i<n+1;i++){
            check(s[i]);
        }
    }
    public static void check(String s){
        int vc=0,cc=0;
        for(int i=0;i<s.length();i++)
        {

            if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'||s.charAt(i)=='A'||s.charAt(i)=='E'){
                vc+=1;
            }
            else
            cc+=1;
        }
        System.out.println(s+" "+vc+" "+cc);
    }
}