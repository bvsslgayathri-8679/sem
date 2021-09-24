class P11b{
    public static void main(String... arg){
        Example ex=new Example();
        Synch t1=new Synch(ex);
        Synch t2=new Synch(ex);
        Synch t3=new Synch(ex);
        Synch t4=new Synch(ex);
        t1.start();
        t2.start();
        t3.start();
        t4.start();

    }

}
class Example{
    void display(){
        
        synchronized(this){
            System.out.println(Thread.currentThread().getName());
            for(int i=0;i<4;i++){
                System.out.println(Thread.currentThread().getName()+" "+i);
                try{
                    Thread.sleep(1000);
                }
                catch(Exception e){}
            }
        }
    }

}

class Synch extends Thread{
    Example e;
    Synch(Example ex){
        this.e=ex;
    }
    public void run(){
        e.display();
    }
}