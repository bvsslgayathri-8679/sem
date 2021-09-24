import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class  P12c extends MouseMotionAdapter{
    public static void main(String... arg){
        mouse_click m1=new mouse_click();

    }

 
}
class mouse_click extends MouseAdapter{
    JFrame frame;
    mouse_click(){
        frame=new JFrame(":)");
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setSize(500,500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.addMouseListener(this);

    }
    public void mouseClicked(MouseEvent m){
        Graphics g1=frame.getGraphics();
        g1.setColor(Color.blue);
        g1.fillOval(m.getX(),m.getY(),20,10);
    }

}