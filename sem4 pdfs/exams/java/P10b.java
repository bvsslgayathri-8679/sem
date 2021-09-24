class P10b{
    public static void main(String... arg){
        divisibile d1=new divisibile();
        try{
        d1.display(3);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
class notdivisibileby2Ecxeption extends Exception{
    notdivisibileby2Ecxeption(String s){
        System.out.println(s);
    }
}
public class divisibile{
    public void display(int n) throws notdivisibileby2Ecxeption{
        if(n%2!=0){
            throw new notdivisibileby2Ecxeption("not div by 2");
        }
        else{
            System.out.println("div by 2");
        }
    }
}
