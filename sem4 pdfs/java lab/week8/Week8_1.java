import java.util.*;
import java.lang.Math;
class Week8_1{
public static void main(String... arg){
	int x1=0,x2,r;
	Random random=new Random();
	x2=random.nextInt(200);
	
	while(x1==0){
		x1=random.nextInt(200);
	}
	
	if(x2>x1){
		x2=x2+x1;
		x1=x2-x1;
		x2=x2-x1;
	}
	int n=0;
	while(n==0){
		 n=random.nextInt(100);
	}
	System.out.println(x1);
	System.out.println(x2);
	System.out.println(n);
	for(int i=0;i<n;i++){
		r=random.nextInt(x1-x2+1)+x2;
		System.out.print(r+" ");
	}
}
}