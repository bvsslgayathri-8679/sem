import java.util.*;

class Week8_3{
public static void main(String... arg){
	Scanner sc=new Scanner(System.in);
	employee e1=new employee();
	employee e2=new employee();
	employee e3=new employee();
	e1.setter(sc.nextInt(),sc.next(),sc.nextInt());
	e2.setter(sc.nextInt(),sc.next(),sc.nextInt());
	e3.setter(sc.nextInt(),sc.next(),sc.nextInt());
	HashMap<Integer,employee> hash1=new HashMap<Integer,employee>();
	hash1.put(e1.getid(),e1);
	hash1.put(e2.getid(),e2);
	hash1.put(e3.getid(),e3);
	int search_key=sc.nextInt();
	if(hash1.containsKey(search_key)){
		System.out.println("Searched employee found\n employee id is "+ search_key+" employee name is "+hash1.get(search_key).getname()+" and age is  "+hash1.get(search_key).getage());
	}
	else{
	System.out.println("searched employee not found");
	}

}
}
class employee{
private int id;
private String name;
private int age;
void setter(int i,String n,int a){
id=i;
name=n;
age=a;
}
int getid(){
	return id;
}
String getname(){
	return name;
}
int getage(){
	return age;
}
}