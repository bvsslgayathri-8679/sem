import java.util.*;
class Strdivide{
    public static String[] Lexicographic(String ele,int n){
        String[] arr=new String[ele.length()/n];
        int s=0,i=0;
        while(s<ele.length()){
            
            String val=ele.substring(s,s+n);
            arr[i]=val;
            i+=1;
            s+=n;
        }
        return arr;
    }
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        System.out.println("string:");
        String ele=sc.nextLine();
        System.out.println("size");
        int n=sc.nextInt();  
        String[] arr=new String[ele.length()/n];
        ele=ele.replace(" ","");
        if(ele.length()%n!=0){
            System.out.print("not possible");
            
        }
        
        else
        {
            arr=Lexicographic(ele,n);
            Arrays.sort(arr);
            System.out.println("substrings are");
            for(String i:arr){
            System.out.print(i+" ");
        }
        }
        
        
    }
}