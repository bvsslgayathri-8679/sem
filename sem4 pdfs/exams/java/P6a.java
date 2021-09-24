class P6a{
    public static void main(String... arg){
        cost c1=new cost();
        c1.display();
    }
}


class vehicle{
    String v="a";
    void display(){
        
        System.out.println("vehicle "+v);
    }
}
class brand extends vehicle{
    String b="a";
    void display(){
        
        System.out.println("brand "+b);
    }
}
class cost extends brand{
    cost(){
        System.out.println("const");
    }
    void display(){
        System.out.println("brand "+b);
        System.out.println("vehicle "+v);
    }
}