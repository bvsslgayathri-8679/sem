import java.util.*;
class P4a{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        Box b1=new Box(sc.nextInt(),sc.nextInt(),sc.nextInt());
        System.out.println(b1.volume());
    }
}
class Box{
    private int length,width,height;
    Box(int l,int h,int w){
        length=l;
        width=w;
        height=h;

    }
    int volume(){
        return length*width*height;

    }
}
