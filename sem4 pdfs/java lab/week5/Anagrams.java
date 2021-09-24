
/**
 * Write a description of class Anagrams here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.*;
public class Anagrams
{
    public static void main(String... arg){
        String s1,s2;
        
        Scanner sc=new Scanner(System.in);
        s1=sc.nextLine().toLowerCase();
        s2=sc.nextLine().toLowerCase();
        char []c1=s1.toCharArray();
        char []c2=s2.toCharArray();
        if(s1.length()!=s2.length()){
            System.out.println("Strings "+s1+" and "+s2+" are not anagrams");
            System.exit(0);
        }

        // Arrays.sort(c1);
        // Arrays.sort(c2);
        // int flag=1;
        // String str1=new String(c1);
        // String str2=new String(c2);
        // if(str1.equals(str2)){
        //     System.out.println("Strings "+s1+" and "+s2+" are anagrams");
        // }
        for(int i=0;i<s1.length();i++){
              if(c1[i]!=c2[i]){
                  flag=0;
                  break;
              }
        }
        if(flag==1){
            System.out.println("Strings "+s1+" and "+s2+" are anagrams");
        }
        else
        {
            System.out.println("Strings "+s1+" and "+s2+" are not anagrams");
        }
        
    }
}
