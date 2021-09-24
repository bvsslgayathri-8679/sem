class P11ab{
    public static void main(String... arg){
        Goodmorning g1=new Goodmorning();
        Hello h1=new Hello();
        Welcome w1=new Welcome();
        Thread t1=new Thread(g1);
        Thread t2=new Thread(h1);
        Thread t3=new Thread(w1);
        t1.start();
        t2.start();
        t3.start();
    }
}
class Goodmorning implements Runnable{
    public void run(){
        try{
            for(int i=0;i<3;i++){
                
                System.out.println("Good morning ");
                Thread.sleep(1000);
            }
        }
        catch(Exception e){}
    }
}
class Hello implements Runnable{
    public void run(){
        try{
            for(int i=0;i<3;i++){
                
                System.out.println("Hello ");
                Thread.sleep(2000);
            }
        }
        catch(Exception e){}
    }
}
class Welcome implements Runnable{
    public void run(){
        try{
            for(int i=0;i<3;i++){
                
                System.out.println("Welcome ");
                Thread.sleep(3000);
            }
        }
        catch(Exception e){}
    }
}