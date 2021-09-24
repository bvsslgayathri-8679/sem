//Accept an array of strings and display the number of vowels and consonants occurred in each string.
import java.util.*;
class Vowels_consonents{
    public static void vowels_con(String s){
        int s1=0,s2=0;
        int j=0,k=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'||s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U'){
                s1++;  
                j++;              
            }
            else{
                s2++;
                k++;
            }
        }
        System.out.println("string "+s+" number of vowels "+s1);
        System.out.println("string "+s+" number of consonents "+s2);
        System.out.println();
    }
    public static void main(String... arg){
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        sc.nextLine();
        String[] arr=new String[n+1];
        System.out.println(n);
        
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextLine().trim();
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]!=""){
                vowels_con(arr[i]);
            }
        }
    }
}
