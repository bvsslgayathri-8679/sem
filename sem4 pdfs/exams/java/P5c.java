import java.util.*;
class P5c{
    public static void main(String... arg){
        String s1,s2;
        Scanner sc=new Scanner(System.in);
        s1=sc.nextLine();
        s2=sc.nextLine();
        s1=s1.replace(" ","");
        s2.replace(" ","");
        char c1[]=new char[s1.length()];
        char c2[]=new char[s2.length()];
        c1=s1.toCharArray();
        c2=s2.toCharArray();
        if(s1.length()!=s2.length()){
            System.out.println("not anagrams ");

        }
        else{
            Arrays.sort(c1);
            Arrays.sort(c2);
            int flag=1;
            for(int i=0;i<s1.length();i++)
            {
                if(c1[i]!=c2[i]){
                    System.out.println("not anagrams ");
                    flag=0;

                }
            }
            if(flag==1){
                System.out.println(" anagrams ");

            }
        }
    }
}