
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JTextArea;
// import java.awt.event.ActionEvent;
// import java.awt.event.ActionListener;
import javax.swing.JRadioButton;   
import javax.swing.ButtonGroup; 
import java.awt.GridBagLayout;
import java.awt.GridBagConstraints;


import javax.swing.border.Border;
import javax.swing.border.LineBorder;

public class Week12b{
    public static void main(String... arg){
        registration r1=new registration();

    }
}
class registration extends JFrame{
    JTextField t1,t2,t3,t4,t5;
    JButton b1,b2,b;
    JRadioButton g1,g2;
    ButtonGroup g1g2;
    JLabel l1,l2,l3,l4,l5,l6,l7;
    GridBagConstraints gbc;
    JPanel j1,j2;
    JTextArea a1;
    // String branch[]={"cse","ece","eee","mech","civil"};
    // JComboBox br=new JComboBox(branch);
    public registration(){
        setLayout(new GridBagLayout());
        
        gbc=new GridBagConstraints();
        l1=new JLabel("Your good Name");
        

        gbc.gridx=0;
        gbc.gridy=1;
        add(l1,gbc);
        t1=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy= 1;
        add(t1,gbc);


        


        l2=new JLabel("Your Roll number");
        gbc.gridx=0;
        gbc.gridy=2;
        add(l2,gbc);
        t2=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy= 2;
        add(t2,gbc);


        l3=new JLabel("Your Branch");
        gbc.gridx=0;
        gbc.gridy=3;
        add(l3,gbc);
        t3=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy=3;
        add(t3,gbc);

        l4=new JLabel("Your Section");
        gbc.gridx=0;
        gbc.gridy=4;
        add(l4,gbc);
        t4=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy= 4;
        add(t4,gbc);


        l5=new JLabel("Your Mobile number");
        gbc.gridx=0;
        gbc.gridy=5;
        add(l5,gbc);
        t5=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy= 5;
        add(t5,gbc);





  
        l6=new JLabel("Your Gender");
        gbc.gridx=0;
        gbc.gridy=6;
        add(l6,gbc);



        j1=new JPanel();
       j2=new JPanel();

        g1=new JRadioButton("Male");
        g1g2=new ButtonGroup();
        g1g2.add(g1);
        
        j1.add(g1);
        g2=new JRadioButton("Female");
        j1.add(g2);
        g1g2.add(g2);

        gbc.gridx=1;
        gbc.gridy=6;
        add(j1,gbc);

        




        l7=new JLabel("Your Address");
        gbc.gridx=0;
        gbc.gridy=7;
        add(l7,gbc);

        a1=new JTextArea(10,20);
        gbc.gridx=1;
        gbc.gridy=7;
        add(a1,gbc);




        b1=new JButton("Submit");
        j2.add(b1);
        b2=new JButton("Clear");
        j2.add(b2);
        gbc.gridx=1;
        gbc.gridy=8;
        add(j2,gbc);
        // b1.addActionListener(this);
        // b2.addActionListener(this);
        setVisible(true);
        setSize(600,600);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}




