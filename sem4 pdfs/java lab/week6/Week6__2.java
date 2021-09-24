import java.util.*;
class Week6__2{
public static void main(String... arg){
	figure_3d f1[]=new figure_3d[4];
	f1[0]=new cylinder();
	f1[1]=new cone();
	f1[2]=new sphere();
	f1[3]=new cube();
	for(int i=0;i<4;i++){
		f1[i].surface_Area();
	}
	// f1[0].surface_Area();
	// f1[1].surface_Area();
	// f1[2].surface_Area();
	// f1[3].surface_Area();
}
}

class figure_3d{
	void surface_Area(){
		System.out.println("Total surface Area of the given 3d figure");
		
	}
}

class cylinder extends figure_3d{
void surface_Area(){
	Scanner sc=new Scanner(System.in);
	System.out.println(" radius and height of cylinder ");
	double r=sc.nextDouble();
	double h=sc.nextDouble();
	System.out.println("Total surface area of cylinder is "+(2*3.14*r*(r+h)));
}

}
class cone extends figure_3d{
void surface_Area(){
	Scanner sc=new Scanner(System.in);
	System.out.println(" radius and slant height of cone ");
	double r=sc.nextDouble();
	double h=sc.nextDouble();
	System.out.println("Total surface area of cylinder is "+(3.14*r*(r+h)));
}

}
class sphere extends figure_3d{
void surface_Area(){
	Scanner sc=new Scanner(System.in);
	System.out.println(" radius of sphere ");
	double r=sc.nextDouble();
	System.out.println("Total surface area of cylinder is "+(4*3.14*r*r));
}

}
class cube extends figure_3d{
void surface_Area(){
	Scanner sc=new Scanner(System.in);
	System.out.println(" side of cube ");
	double a=sc.nextDouble();
	System.out.println("Total surface area of cylinder is "+(6*a*a));
}

}
