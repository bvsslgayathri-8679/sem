import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.applet.*;


public class Week13a extends Applet implements MouseMotionListener{
    JLabel l1,l2;
    Panel p1,p2;
    JRadioButton r1,r2,r3;
    JButton b1,b2;
    ButtonGroup bg;
    JTextField tf;
    int x;
    public void init(){
        setBackground(Color.gray);
        p1=new Panel(null);
        p1.setBackground(Color.blue);
        p1.setBounds(0,100,1000,500);
        p1.addMouseMotionListener(this);
        add(p1);

        p2=new Panel(null);
        p2.setBackground(Color.white);
        p2.setBounds(200,200,850,600);

        l1=new JLabel("choice");
        l1.setBounds(150,10,90,20);
        p2.add(l1);
        
        
        r1=new JRadioButton("LINE");
        r1.setBounds(220,10,90,20);
        r2=new JRadioButton("OVAL",true);
        r2.setBounds(320,10,90,20);
        r3=new JRadioButton("RECTANGLE");
        r3.setBounds(420,10,100,20);
        bg=new ButtonGroup();

        bg.add(r1);
        bg.add(r2);
        bg.add(r3);

        l2=new JLabel("Size");
        l2.setBounds(200,60,50,30);
        p2.add(l2);
        b1=new JButton("-");
        b1.setBounds(250,60,50,30);

        b2=new JButton("+");
        tf=new JTextField(5);
        tf.setBounds(300,60,50,30);

        b2.setBounds(350,60,50,30);
        tf.setEnabled(false);
        tf.setFont(new Font("",Font.BOLD,18));
        tf.setText("8");

        x=Integer.parseInt(tf.getText());
        b1.addActionListener(
        new ActionListener(){
            public void actionPerformed(ActionEvent e){
                if(x!=0)
                x-=1;
                tf.setText(String.valueOf(x));

            }
        });
        b2.addActionListener(
        new ActionListener(){
            public void actionPerformed(ActionEvent e){
                if(x!=0)
                x+=1;
                tf.setText(String.valueOf(x));

            }
        });
        p2.add(r1);
        p2.add(r2);
        p2.add(r3);
        
        p2.add(b1);
        p2.add(b2);
        p2.add(tf);
        // add(tf);
        // add(b1);
        // add(b2);
        add(p1);
        add(p2);

    }
    public void mouseDragged(MouseEvent ae){
        Graphics g=p1.getGraphics();
        g.setColor(Color.white);
        if(r1.isSelected())
        {
            g.drawLine(ae.getX(),ae.getY(),ae.getX(),ae.getY()+2);

        }
        if(r2.isSelected()){
            g.fillOval(ae.getX(),ae.getY(),x,x);

        }
        if(r3.isSelected())
        g.fillRect(ae.getX(),ae.getY(),x,x);
    }
    public void mouseMoved(MouseEvent ae){

    }
}