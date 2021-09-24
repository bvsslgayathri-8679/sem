import java.awt.*;
import javax.swing.*;
public class P12a extends JApplet implements Runnable{
    String s="gayathri";
    int x;
    public void init(){
        Thread t1=new Thread(this);
        t1.start();
    }
    public void run(){
        while(true){
            x=50;
            try{
                for(;x<150;x+=10){
                    repaint();
                    Thread.sleep(1000);

                }
                for(;x>0;x-=10){
                    repaint();
                    Thread.sleep(1000);

                }
                
            }
            catch(Exception e){
                
            }
        }
    }
    public void paint(Graphics g){
        super.paint(g);
        g.drawString(s,x,100);
    }
}