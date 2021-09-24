import java.util.*;
public class Week6__1{

public static void main(String...arg){

Cost c1=new Cost();
c1.display_details();

}

}

class vehicle {
	Scanner sc=new Scanner(System.in);
    String vehicle_type = sc.next();
}

class brand extends vehicle {
	Scanner sc=new Scanner(System.in);
    String brand_name = sc.next();

}

class Cost extends brand {
	Scanner sc=new Scanner(System.in);
    double cost1 = sc.nextDouble();

    Cost() {
        System.out.println("Constructor of cost class");
    }

    void display_details(){
        System.out.println("type of vehicle is "+vehicle_type);
        System.out.println("type of brand is " + brand_name);
        System.out.println("cost of vehicle "+vehicle_type+" is "+cost1);


    }
}
