import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import javax.swing.event.*;
import javax.swing.*;
import javax.swing.border.Border;

public class Week14b extends Applet implements ChangeListener{
    
    JSlider j1,j2,j3;
    JLabel l1,l2,l3;
    Color c;
    public void stateChanged(ChangeEvent e)
    {
        setBackground(new Color(j1.getValue(),j2.getValue(),j3.getValue()));
    }

    public void init(){
        setLayout(new FlowLayout());
        j1=new JSlider(JSlider.HORIZONTAL,0,255,100);
        j2=new JSlider(JSlider.HORIZONTAL,0,255,100);
        j3=new JSlider(JSlider.HORIZONTAL,0,255,100);
        l1=new JLabel("R(red)");
        Border border = BorderFactory.createLineBorder(Color.black, 1);
        l1.setBorder(border);
        l1.setOpaque(true);
        l2=new JLabel("G(green)");
        l2.setBorder(border);
        l2.setOpaque(true);

        l3=new JLabel("B(blue)");
        l3.setBorder(border);
        l3.setOpaque(true);

        add(l1);
        add(j1);
        add(l2);
        add(j2);
        add(l3);
        add(j3);
        
        j1.addChangeListener(this);
        j2.addChangeListener(this);
        j3.addChangeListener(this);
        setBackground(new Color(j1.getValue(),j2.getValue(),j3.getValue()));
        

    }
}