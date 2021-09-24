import java.util.*;
// import java.io.*;
// import java.lang.*;

// import java.util.*;
class Week7_2{
	public static void main(String... arg){
		Scanner sc=new Scanner(System.in);

		byte b=sc.nextByte();
		short s=sc.nextShort();
		
		int i=sc.nextInt();
		long l=sc.nextLong();
		float f=sc.nextFloat();
		double d=sc.nextDouble();
		char c='c';
		boolean boo=true;
		
		
		Byte byteobj=b;  
		Short shortobj=s;  
		Integer intobj=i;  
		Long longobj=l;  
		Float floatobj=f;  
		Double doubleobj=d;  
		Character charobj=c;  
		Boolean boolobj=boo;  
		
		Vector v1=new Vector();
		v1.add(byteobj);
		v1.add(shortobj);
		v1.add(intobj);
		v1.add(longobj);
		v1.add(floatobj);
		v1.add(doubleobj);
		v1.add(charobj);
		v1.add(boolobj);
		System.out.println("---Printing primitive values---");  
		Iterator itr=v1.iterator();
		while(itr.hasNext()){
		System.out.println(itr.next());
		}

	}

}
