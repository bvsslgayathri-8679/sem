import java.util.*;
class P8c{
    public static void main(String... arg){
        employee e1=new employee();
        employee e2=new employee();
        employee e3=new employee();
        Scanner sc=new Scanner(System.in);
        e1.setter(sc.nextInt(),sc.next(),sc.nextInt());
        e2.setter(sc.nextInt(),sc.next(),sc.nextInt());
        e3.setter(sc.nextInt(),sc.next(),sc.nextInt());
        HashMap <Integer,employee> h1=new HashMap<Integer,employee>();
        h1.put(e1.getid(),e1);
        h1.put(e2.getid(),e2);
        h1.put(e3.getid(),e3);

        int sk=sc.nextInt();
        if(h1.containsKey(sk)){
            System.out.println(h1.get(sk).getname()+" "+h1.get(sk).getage());
        }
        else{
            System.out.println("not found");
        }

    }
}
class employee{
    private int id;
    private String name;
    private int age;
    void setter(int id,String name,int age){
        this.id=id;
        this.name=name;
        this.age=age;
    }
    int getid()
    {
        return id;
    }
    String getname(){
        return name;
    }
    int getage(){
        return age;
    }
}