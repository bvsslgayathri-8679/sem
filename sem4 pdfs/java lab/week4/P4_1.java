import java.util.*;
class P4_1{
    float height,depth,width;
    P4_1(float h,float w,float d){
        height=h;
        width=w;
        depth=d;
    }
    double volume(){
        return height*width*depth;
    }
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        float h=sc.nextFloat();
        float w=sc.nextFloat();
        float d=sc.nextFloat();
        P4_1 ob1=new P4_1(h,w,d);
        System.out.print("Volume is "+ob1.volume());
    }
}


