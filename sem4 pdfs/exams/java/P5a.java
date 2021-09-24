import java.util.*;
class P5a{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        s=s.replace(" ","");
        int n=sc.nextInt();
        if(s.length()%n!=0){
            System.out.println("cant divide ");
            
        }
        else{
            System.out.println(s.length());
            int j=0,i=0;
            String arr1[]=new String[(s.length()/n)];
            while(i<(s.length()/n)){
                
                arr1[i]=s.substring(j,j+n);
                i+=1;
                j+=n;
            }
            Arrays.sort(arr1);
        for(String k:arr1)
        {
            System.out.println(k);
        }
        }
        
    }
}