import java.util.*;
public class 6_1{

public static void main(String...arg){
Scanner sc=new Scanner(System.in);
Cost c1=new Cost();
c1.display_details();

}

}

class vehicle {
    String vehicle_type = sc.next();
}

class brand extends vehicle {
    String brand_name = sc.next();

}

class Cost extends brand {
    double cost_ = sc.nextDouble;

    Cost() {
        System.out.println("Constructor of cost class");
    }

    display_details(){
        System.out.println("type of vehicle is");
        System.out.println("type of brand is" + brand_name);
        System.out.println("cost of vehicle "+vehicle_type+" is "+cost_);
        
        return ;

    }
}
