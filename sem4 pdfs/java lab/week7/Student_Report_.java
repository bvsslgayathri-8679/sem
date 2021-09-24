package report;
import pak1.Stud;
import pak2.Spts;



class Student_Report_{
	public static void main(String... arg){
		Stud s1=new Stud();
		Spts s2=new sport();
		System.out.println("Name of the student is "+s1.name);
		System.out.println("Roll number of the student is "+s1.roll_num);
		s2.display();
	}   
}

class sport implements Spts{
	public void display(){
		System.out.println("Sports available : \n throwball\n table tennis\n basket ball\n cricket\n football");

	}
}
