import java.awt.*;
import java.applet.*;
import javax.swing.*;


public class Week12a extends JApplet implements Runnable{
    int x,y,value;
    String s;
    Thread t1;
    public void init(){
        x=2;
        y=50;
        s="Gayathri";
        value=1;
        t1=new Thread(this);
        t1.start();

    }
    public void update(){
        x+=2*value;
        if(x<100){
            value+=1;
        }
        if(x>300)
        {
            value-=1;
        }
        System.out.println(x);

    }
    public void run(){
        while(true){
        update();
        repaint();
        try{
            Thread.sleep(1000);
        }
        catch(Exception e){}
    }
    }
    public void paint(Graphics g)
    {
        super.paint(g);
        g.drawString(s,x,y);
    }

}