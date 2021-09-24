import java.util.*;
class P7b{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int i=sc.nextInt();
        byte b=sc.nextByte();
        short sh=sc.nextShort();
        float f=sc.nextFloat();
        double d=sc.nextDouble();
        long l=sc.nextLong();
        char ch='c';
        boolean boo=true;

        Byte bobj=b;
        Integer iobj=i;
        Short sobj=sh;
        Float fobj=f;
        Double dobj=d;
        Long lobj=l;
        Character chobj=ch;
        Boolean boobj=boo;

    Vector v1=new Vector();
    v1.add(bobj);
    v1.add(iobj);
    v1.add(sobj);
    v1.add(fobj);
    v1.add(dobj);
    v1.add(lobj);
    v1.add(chobj);
    v1.add(boobj);
    System.out.println(v1);

    // Iterator itr=v1.iterator();
    // while(itr.hasNext()){
    //     System.out.println(itr.next());
    // }
    // }
}