
public class P11_2 {
    public static void main(String... arg) throws Exception{
        Counter c=new Counter();
        Thread t1=new Thread(new Runnable(){
            public  void run(){
                for(int i=1;i<=10;i++){
                    c.increment();
                    System.out.print(c.count+" ");
                }
            }
        });
        Runnable R1=()->{
                for(int i=1;i<=10;i++){
                    c.increment();
                    System.out.print(c.count+" ");
                }
            };

        t1.start();
        Thread t2=new Thread(R1);

        t2.start();

        t1.join();
        t2.join();
        
    }
}

class Counter{
    int count=0;
    public synchronized void increment(){
        count++;
        
        
    }
    
       
    
}
