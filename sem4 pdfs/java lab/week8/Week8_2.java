import java.util.*;
class Week8_2{
public static void main(String... arg){
	ArrayList<String> a1=new ArrayList<>();
	a1.add("5");
	a1.add("6");
	a1.add("7");
	a1.add("8");
	System.out.println(a1.get(0));
	a1.remove("6");
	System.out.println(a1.size());
}
}