package P7a;

import sports.*;
import stud.stud;

class P7a{
    public static void main(String... arg){
        stud s1=new stud();
        sports s2=new sprts();
        System.out.println(s1.name+" "+s1.id);
        s2.display();
    }
}
class sprts implements sports{
    public void display(){
        System.out.println("sports aree ........");
    }
}