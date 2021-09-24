import java.io.*;
import java.util.*;
public class week91{
    public static void main(String... arg) throws IOException{
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the file name ");
        String filename=sc.nextLine();
        System.out.println("enter the destination file name ");
        String destfilename=sc.nextLine();
        File file=new File(filename);
        FileInputStream fis=new FileInputStream(file);
        InputStreamReader ins=new InputStreamReader(fis);
        BufferedReader br= new BufferedReader(ins);

        File file2=new File(destfilename);
        FileOutputStream fout=new FileOutputStream(file2);

        String line;
        int terminating_symbols = 0;
        int alphabets=0;
        int numbers=0;
        int splsymbols=0;
        while((line=br.readLine())!=null)
        {
            for(int i=0;i<line.length();i++)
            {
                char c=line.charAt(i);
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

            }
        }
        try{
            FileOutputStream obj1=new FileOutputStream("Statistic.txt");    
            String s1=String.format("Total number of alphabets %d \nTotal number of numbers %d \nTotal number of terminating_symbols %d \nTotal number of special symbols %d \n ",alphabets,numbers,terminating_symbols,splsymbols);  
            byte[] bytesArray = s1.getBytes();
    
            obj1.write(bytesArray);
           
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