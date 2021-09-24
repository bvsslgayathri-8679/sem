import java.util.*;
class Stringhm{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        if(s1.equals(s2)){
            System.out.println("both strings are equal ");
        }
        else{
            System.out.println("not equal ");
        }
        System.out.println("char at position 2 of string 1"+s1.charAt(2));
        System.out.println("length of s1 "+s1.length());
        System.out.println("substr from index 1 "+s1.substring(1));
        System.out.println("substr from index 1 to 5 "+s1.substring(1,5));
        System.out.println("concat s1,s2 "+s1.concat(s2));
        System.out.println("replace a with i "+s1.replace('a','i'));
        System.out.println("Index of a char "+s1.indexOf('g'));
        System.out.println("s1 to uppercase "+s1.toUpperCase());
        System.out.println("s1 to uppercase "+s1.toLowerCase());     
        System.out.println("trim s1 "+s1.trim());
        // String s3=Arrays.copyOf(s2,s2.length()*2);
    }
}