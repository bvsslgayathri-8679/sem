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
		MyArrayList myArrayList1 = new MyArrayList();
		myArrayList1.add(1);
		myArrayList1.add(4);
		myArrayList1.add(5);
		myArrayList1.add(23);
		myArrayList1.add(124);
		System.out.println("\nSize: " + myArrayList1.size());
		for (int i = 0; i < myArrayList1.size(); i++) {
			System.out.println(myArrayList1.get(i));
		}
				myArrayList1.add(14);
			System.out.println("\nSize: " + myArrayList1.size());
		for (int i = 0; i < myArrayList1.size(); i++) {
			System.out.println(myArrayList1.get(i));
		}
			myArrayList1.remove(4);

		System.out.println("\nSize: " + myArrayList1.size());

		for (int i = 0; i < myArrayList1.size(); i++) {
			System.out.println(myArrayList1.get(i));
		}
	}
}