import java.util.*;
import java.io.*;
class Week9__3{
	public static void main(String[] args) {
 		File file1 = new File("E:\\books and pdfs\\sem4 pdfs\\java lab\\week9\\sample.txt");
        FileInputStream fs = new FileInputStream(file1);
        InputStreamReader inp = new InputStreamReader(fs);

        BufferedReader reader = new BufferedReader(inp);    
		File file2 = new File("E:\\books and pdfs\\sem4 pdfs\\java lab\\week9\\stopwords.txt");
        FileInputStream fs2 = new FileInputStream(file2);
        InputStreamReader inp2 = new InputStreamReader(fs2);

        BufferedReader reader2 = new BufferedReader(inp2); 

        while(reader2.){

        }

    }
}
/*import java.util.*;
import java.io.*;
class Week9_3{
    public static void main(String[] args) {
    File file = new File("sample.txt");
    try{
    Scanner input = new Scanner(file); 
    ArrayList li=new ArrayList();
    int count = 0;
    while (input.hasNext()) {
      li.add(input.next());
    }
    Collections.sort(li);   

    System.out.println(li);
}
catch(FileNotFoundException e){
    System.out.println("file not found");
}
}
}
*/