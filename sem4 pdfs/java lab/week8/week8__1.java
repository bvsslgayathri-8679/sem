import java.util.*;
import java.lang.Math;


class week8__1{
    public static void main(String... arg){
    int x1,x2,n;
    Random r=new Random();
    x1=r.nextInt(200-1+1)+1;
    x2=r.nextInt(200-1+1)+1;
    n=r.nextInt(20+1-1)+1;
    if(x2>x1){
        int t=x1; 
        x1=x2;
        x2=t;
    }

    for(int i=0;i<n;i++){
        int rand=r.nextInt(x1-x2+1)+x2;
        System.out.print(rand+" ");

    }
    }
}