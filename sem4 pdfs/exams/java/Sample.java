import javax.swing.JTextField;
import javax.swing.JLabel;
import javax.swing.JFrame;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import javax.swing.JPanel;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;
import java.awt.event.ActionEvent;
class Sample 
{
    public static void main(String... args)
    {
        Registration r=new Registration();
    }
}
class Registration extends JFrame implements ActionListener
{
    JLabel l1,l2,l3,l4,l5,l6;
    JTextField t1,t2,t3,t4,t5;
    JRadioButton r1,r2;
    ButtonGroup bg;
    GridBagConstraints gbc;
    JPanel p1,p2;
    JButton b1,b2;
    Registration()
    {
        gbc=new GridBagConstraints();
        setLayout(new GridBagLayout());
        
        setTitle("Registration Form");
        p1=new JPanel();
        p2=new JPanel();
        l1=new JLabel("Enter name");
        gbc.gridx=0;gbc.gridy=1;add(l1,gbc);
        t1=new JTextField(30);
        gbc.gridx=1;gbc.gridy=1;add(t1,gbc);
        l2=new JLabel("Enter age");
        gbc.gridx=0;gbc.gridy=2;add(l2,gbc);
        t2=new JTextField(30);
        gbc.gridx=1;gbc.gridy=2;add(t2,gbc);
        l3=new JLabel("Enter address");
        gbc.gridx=0;gbc.gridy=3;add(l3,gbc);
        t3=new JTextField(30);
        gbc.gridx=1;gbc.gridy=3;add(t3,gbc);
        l4=new JLabel("Enter branch");
        gbc.gridx=0;gbc.gridy=4;add(l4,gbc);
        t4=new JTextField(30);
        gbc.gridx=1;gbc.gridy=4;add(t4,gbc);
        l5=new JLabel("Enter RollNo.");
        gbc.gridx=0;gbc.gridy=5;add(l5,gbc);
        t5=new JTextField(30);
        gbc.gridx=1;gbc.gridy=5;add(t5,gbc);
        l6=new JLabel("Enter Gender");
        gbc.gridx=0;gbc.gridy=6;add(l6,gbc);
        r1=new JRadioButton("Male");
        p1.add(r1);
        r2=new JRadioButton("Female");
        p1.add(r2);
        bg=new ButtonGroup();
        bg.add(r1);bg.add(r2);
        gbc.gridx=1;gbc.gridy=6;add(p1,gbc);
        b1=new JButton("OK");
        b2=new JButton("Clear");
        p2.add(b1);p2.add(b2);
        gbc.gridx=1;gbc.gridy=7;add(p2,gbc);
        b1.addActionListener(this);
        b2.addActionListener(this);
        setVisible(true);
        setSize(400,400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource()==b1)
        {
            String a=t1.getText();
            String b=t2.getText();
            String c=t3.getText();
            String d=t4.getText();
            String e=t5.getText();
            if(a.equals(""))
            JOptionPane.showMessageDialog(null,"Name Mandatory!");
            else if(b.equals(""))
            JOptionPane.showMessageDialog(null,"Age Mandatory!");
            else if(c.equals(""))
            JOptionPane.showMessageDialog(null,"Address Mandatory!");
            else if(d.equals(""))
            JOptionPane.showMessageDialog(null,"Branch Mandatory");
            else if(e.equals(""))
            JOptionPane.showMessageDialog(null,"RollNo. Mandatory");
            else if(!r1.isSelected()&&!r2.isSelected())
            JOptionPane.showMessageDialog(null,"Gender Mandatory!");
            else
            JOptionPane.showMessageDialog(null,"Registered Successfully!");
        }
        if(ae.getSource()==b2)
        {
            
            t1.setText(null);
            t2.setText(null);
            t3.setText(null);
            t4.setText(null);
            t5.setText(null);
            bg.clearSelection();
        }
    }
}