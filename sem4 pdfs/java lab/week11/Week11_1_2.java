class Week11_1_2{
    public static void main(String... arg){
        GoodMorning1 t1=new GoodMorning();
        Hello1 t2= new Hello();
        Welcome1 t3=new Welcome();
        t1.start();
        t2.start();
        t3.start();
    }
}
class GoodMorning1 implements Runnable{
    public void run(){
        try{
        for(int i=0;i<10;i++){
            sleep(1000);
            System.out.println("Good Morning");

        }
    }
    catch(Exception e){}
    }
}

class Hello1 implements Runnable{
    public void run(){
        try{
        for(int i=0;i<10;i++){
            sleep(2000);
            System.out.println("Hello");

        }
    }
    catch(Exception e){}
    }
}

class Welcome1 implements Runnable{
    public void run(){
        try{
        for(int i=0;i<10;i++){
            sleep(3000);
            System.out.println("Welcome");

        }
    }
    catch(Exception e){}
    }
}