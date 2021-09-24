import java.util.*;
import java.io.*;
class Week9_3{
	public static void main(String[] args) {
	File file = new File("sample1.txt");
    File file1 = new File("stopwords.txt");
        ArrayList<String> li1=new ArrayList<String>();

    try{
    Scanner input1 = new Scanner(file1); 
    while (input1.hasNext()) {
        String a=input1.next();
      li1.add(a.toLowerCase());
    }
    
    }
    catch(FileNotFoundException e){
    System.out.println("file not found");
    }
    try{
    Scanner input = new Scanner(file); 
 	ArrayList<String> li=new ArrayList<String>();
    while (input.hasNext()) {
        String a=input.next().toLowerCase();
        if(li1.contains(a) ||li.contains(a))
            continue;
        li.add(a);
    }
    Collections.sort(li);   

    System.out.println(li);
}
catch(FileNotFoundException e){
	System.out.println("file not found");
}
}
}