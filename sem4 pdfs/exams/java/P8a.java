import java.util.*;
class P8a{
    public static void main(String... arg){
        Random r=new Random();
        int x1=r.nextInt(200-1+1)+1;
        int x2=r.nextInt(150-1+1)+1;
        int n=r.nextInt(20-1+1)+1;
        if(x2>x1){
            int temp=x2;
            x2=x1;
            x1=temp;
        }
        for(int i=0;i<n;i++){
            int rand=r.nextInt(x1-x2+1)+x2;
            System.out.print(rand+" ");
        }
    }
}