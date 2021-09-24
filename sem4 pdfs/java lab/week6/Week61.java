public class Week61{
public static void main(String[] args){
Cost v1 = new Cost();
v1.display();
}
}
class Vehicle{
String v="Car";
}
class Brand extends Vehicle{
String b="Ferrari sf90 stradale";

}
class Cost extends Brand{
int r=75000000;
Cost(){
System.out.println("Cost class constructor");
}
void display(){
System.out.println("Vehicle Type : " +v);
System.out.println("Brand of the vehicle :" +b);
System.out.println("Cost of the vehicle : "+r);
}
}