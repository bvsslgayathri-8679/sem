class P11aa{
    public static void main(String... arg){
        Goodmorning g1=new Goodmorning();
        Hello h1=new Hello();
        Welcome w1=new Welcome();
        g1.start();
        h1.start();
        w1.start();
        
    }
}
class Goodmorning extends Thread{
    public void run(){
        try{
        for(int i=0;i<3;i++){
            sleep(1000);
            System.out.println("good morning");
            
        }
    }
    catch(Exception e){

    }
    }
}
class Hello extends Thread{
    public void run(){
        try{
        for(int i=0;i<3;i++){
            sleep(2000);
            System.out.println("Hello");
            
        }
    }
        catch(Exception e){
        
        }
    }

}
class Welcome extends Thread{
    public void run(){
        try{
        for(int i=0;i<3;i++){
            sleep(3000);
            System.out.println("Welcome");
            
        }
    }
    catch(Exception e){
        
    }
    }
}