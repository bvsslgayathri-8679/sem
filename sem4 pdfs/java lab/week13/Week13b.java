import javax.swing.*;
public class Week13b{
    public static void main(String... arg){
        Table t1=new Table();
    }
}
 class Table{
    JFrame f;
    public Table(){
        f=new JFrame();
        String data[][]={ {"1","hari","670000"},    
        {"2","gayathri","780000"},    
        {"3","ravi","700000"}};
        String column[]={"ID","NAME","SALARY"};  
        JTable jt=new JTable(data,column);
        JScrollPane sp=new JScrollPane(jt);    
        f.add(sp);          
        f.setSize(300,400);    
        f.setVisible(true);  
    }
}