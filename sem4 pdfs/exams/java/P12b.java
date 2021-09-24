import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.event.ActionListener;

class P12b{
    public static void main(String... arg){
        Registration r1=new Registration();

    }
}
class Registration extends JFrame implements ActionListener{
    JTextField t1,t2,t3,t4,t5;
    JTextArea a1;
    JLabel l1,l2,l3,l4,l5,l10;
    JRadioButton r1,r2;
    ButtonGroup bg1;
    JButton b1,b2,b3;
    GridBagConstraints gbc;
    JPanel j1,j2;

    Registration(){
        setLayout(new GridBagLayout());
        gbc=new GridBagConstraints();
        
        
        l1=new JLabel("name ");
        gbc.gridx=0;
        gbc.gridy=1;
        add(l1,gbc);
        t1=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy=1;
        add(t1,gbc);


        l2=new JLabel("email ");
        gbc.gridx=0;
        gbc.gridy=2;
        add(l2,gbc);
        t2=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy=2;
        add(t2,gbc);


        l3=new JLabel("age ");
        gbc.gridx=0;
        gbc.gridy=3;
        add(l3,gbc);
        t3=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy=3;
        add(t3,gbc);

        l4=new JLabel("roll num ");
        gbc.gridx=0;
        gbc.gridy=4;
        add(l4,gbc);
        t4=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy=4;
        add(t4,gbc); 

        l10=new JLabel("college ");
        gbc.gridx=0;
        gbc.gridy=5;
        add(l10,gbc);
        t5=new JTextField(20);
        gbc.gridx=1;
        gbc.gridy=5;
        add(t5,gbc);

        bg1=new ButtonGroup();
        r1=new JRadioButton("male");
        r2=new JRadioButton("female");
        bg1.add(r1);
        bg1.add(r2);
        
        j1=new JPanel();
        j1.add(r1);
        j1.add(r2);
        gbc.gridx=1;
        gbc.gridy=6;
        add(j1,gbc);

        l5=new JLabel("Address ");
        gbc.gridx=0;
        gbc.gridy=7;
        add(l5,gbc);


        a1=new JTextArea(10,10);
        gbc.gridx=1;
        gbc.gridy=7;
        add(a1,gbc);

        b1=new JButton("submit");
        b2=new JButton("clear ");
        j2=new JPanel();
        j2.add(b1);
        j2.add(b2);
        b1.addActionListener(this);
        b2.addActionListener(this);
        gbc.gridx=1;
        gbc.gridy=8;
        add(j2,gbc);




        setVisible(true);
        setSize(500,500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
    public void actionPerformed(ActionEvent ae){
         if(ae.getSource()==b1){
             String name=t1.getText();
             String email=t2.getText();
             String age=t2.getText();
             String roll=t4.getText();
             String coll=t5.getText();
             String addr=a1.getText();
             int k=0;
             if(name.equals("")){
                 JOptionPane.showMessageDialog(null,"name is mandatory ");
                k+=1;
             }
             
             if(email.equals("")){
                JOptionPane.showMessageDialog(null,"email is mandatory ");
                k+=1;
            }
            if(age.equals("")){
                JOptionPane.showMessageDialog(null,"Age is mandatory ");
                k+=1;
            }
            if(roll.equals("")){
                JOptionPane.showMessageDialog(null,"roll number is mandatory ");
                k+=1;
            }
            if(coll.equals("")){
                JOptionPane.showMessageDialog(null,"college is mandatory ");
                k+=1;
            }
            if(addr.equals("")){
                JOptionPane.showMessageDialog(null,"address is mandatory ");
                k+=1;
            }
            if(!r1.isSelected() &&!r2.isSelected()){
             JOptionPane.showMessageDialog(null,"gender is mandatory ");   
             k+=1;
            }
            if(k==0){
                JOptionPane.showMessageDialog(null,"Registration successful ");
            }
         }

         if(ae.getSource()==b2){
             t1.setText("");
             t2.setText("");
             t3.setText("");
             t4.setText("");
             t5.setText("");
             a1.setText("");
             bg1.clearSelection();

         }
    }
}
