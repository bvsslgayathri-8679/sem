import java.util.*;
class MyArrayList{
	private Object[] arrlist=new Object[1]; 
	private int size_=0;
	public void add(Object object){
		if(size_==arrlist.length){
			arrlist=Arrays.copyOf(arrlist,arrlist.length*2);
		}
		arrlist[size_]=object;
		size_++;
	}
	public Object get(int ind){
		if(ind>=size_||ind<0){
			throw new ArrayIndexOutOfBoundsException("element not found");
		}
		return arrlist[ind];

	}
	public void remove(int ind){
		if(ind>=size_||ind<0){
			throw new ArrayIndexOutOfBoundsException("cant delete");

		}
		for(int i=ind;i<size_;i++){
			arrlist[i]=arrlist[i+1];

		}
		size_--;
	}
	public int size(){
		return size_;
	}
	public static void main(String... ARG){

		Scanner sc=new Scanner(System.in);
		MyArrayList myArrayList1 = new MyArrayList();
		System.out.println("enter number of elements");	
		int n=sc.nextInt();
				System.out.println("enter elements");	

		for(int i=0;i<n;i++){
			myArrayList1.add(sc.nextInt());
		}
		System.out.println("\nSize: " + myArrayList1.size());
		for (int i = 0; i < myArrayList1.size(); i++) {
			System.out.print(myArrayList1.get(i)+" ");
		}
				System.out.println();	

				System.out.println("enter element to be added");	

				myArrayList1.add(sc.nextInt());
			System.out.println("\nSize: " + myArrayList1.size());
		for (int i = 0; i < myArrayList1.size(); i++) {
			System.out.print(myArrayList1.get(i)+" ");
		}
		System.out.println();	

		System.out.println("enter element to be removed");	

			myArrayList1.remove(sc.nextInt());

		System.out.println("\nSize: " + myArrayList1.size());

		for (int i = 0; i < myArrayList1.size(); i++) {
			System.out.print(myArrayList1.get(i)+" ");
		}
	}
}