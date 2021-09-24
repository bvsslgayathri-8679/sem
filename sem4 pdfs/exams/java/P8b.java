import java.util.*;
class P8b{
    private Object[] arraylist=new Object[1];
    private int size1=0;
    public void add(Object a){
        if(size1==arraylist.length)
        {
            arraylist=Arrays.copyOf(arraylist,arraylist.length*2);
        }
        arraylist[size1]=a;
        size1++;

    }
    public Object get(int ind){
        if(ind>=size1 || ind<0 )
            throw new ArrayIndexOutOfBoundsException("array index out of bound");
    return arraylist[ind];
    }

    public void remove(int ind){
        if(ind>size1 || ind<0 )
            throw new ArrayIndexOutOfBoundsException("array index out of bound");
        for(int i=ind;i<size1;i++){
            arraylist[i]=arraylist[i+1];
        }
        size1--;
    }
    public int size(){
        return size1;
    }
    public void display(){
        for(int i=0;i<size1;i++){
            System.out.print(arraylist[i]+"  ");
        }
    }


    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        P8b o1=new P8b();
        System.out.println("ch");
        int ch=sc.nextInt();
        while(ch!=0){
            if(ch==1){
                int ele=sc.nextInt();
                o1.add(ele);
            }
            if(ch==2){
                int ind=sc.nextInt();
                System.out.println(o1.get(ind));
            }
            if(ch==3){
                int ind=sc.nextInt();
                o1.remove(ind);
                
            }
            if(ch==4){
                System.out.println(o1.size());
            }
            if(ch==5){
                o1.display();
            }
            System.out.println("ch");

            ch=sc.nextInt();
        }

    }
}