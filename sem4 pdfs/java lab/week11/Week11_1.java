class Week11_1{
    public static void main(String... arg){
        GoodMorning t1=new GoodMorning();
        Hello t2= new Hello();
        Welcome t3=new Welcome();
        t1.start();
        t2.start();
        t3.start();
    }
}
class GoodMorning extends Thread{
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

class Hello extends Thread{
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

class Welcome extends Thread{
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