import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.JFrame;
public class Week12c extends MouseMotionAdapter{

    public static void main(String... arg){
        mouse_click m=new mouse_click();

    }
    
}
class mouse_click extends MouseAdapter{
    JFrame frame;
    mouse_click(){
        frame=new JFrame("mouce clicking adapter :) ");
        frame.addMouseListener(this);
        frame.setSize(400,400);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
    public void mouseClicked(MouseEvent e){
        Graphics g=frame.getGraphics();
        g.setColor(Color.BLUE);
        g.fillOval(e.getX(),e.getY(),10,10);
    }
}

