import java.io.*;
import java.lang.*;
import java.util.*;
public class Week9_1{
public static void main(String[] args) throws IOException
    {
        File file1 = new File("E:\\books and pdfs\\sem4 pdfs\\java lab\\week9\\sample.txt");
        FileInputStream fs = new FileInputStream(file1);
        InputStreamReader inp = new InputStreamReader(fs);

        // BufferedReader reader = new BufferedReader(inp);
        // String line;
        // List<String> a1=new ArrayList<String>();
        // Initializing counters
        int terminating_symbols = 0;
        int alphabets=0;
        int numbers=0;
        int splsymbols=0;
        int data=inp.read();


        while(data!=-1)
        {    
            char c = (char) data;
            if(c>='a' && c<='z' || c>='A' && c<='Z'){
                alphabets+=1;
            }
            else if(c>='0' && c<='9')
            {
                numbers+=1;
            }
            else if(c==' '||c=='\n'|| c=='\t'){
                terminating_symbols+=1;   
            }
            else{
                splsymbols+=1;
            }
            data=inp.read();

        }
         try{
        FileOutputStream obj1=new FileOutputStream("Statistic.txt");    
        String s1=String.format("Total number of alphabets %d \nTotal number of numbers %d \nTotal number of terminating_symbols %d \nTotal number of special symbols %d \n ",alphabets,numbers,terminating_symbols,splsymbols);  
        byte[] bytesArray = s1.getBytes();

        obj1.write(bytesArray);
        // obj1.write("\nTotal number of numbers = " + numbers);
        // obj1.write("\nTotal number of terminating_symbols = " + terminating_symbols);
        // obj1.write("\nTotal number of special symbols = " + splsymbols);
        // obj1.close();
        }
        catch (IOException e) {
      System.out.println("An error occurred."+e);
        }     
        System.out.println("Total number of alphabets = " + alphabets);
        System.out.println("Total number of numbers = " + numbers);
        System.out.println("Total number of terminating_symbols = " + terminating_symbols);
        System.out.println("Total number of special symbols = " + splsymbols);
   }
}