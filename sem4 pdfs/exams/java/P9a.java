import java.util.*;
import java.io.*;
class P9a{
    public static void main(String... arg) throws IOException
    {
        int ts=0,a=0,ss=0,n=0;
        try{
        File file=new File("sample.txt");
        FileInputStream fs=new FileInputStream(file);
        InputStreamReader f=new InputStreamReader(fs);

        
        int data=f.read();
        while(data!=-1){
            char c=(char) data;
            
            if(c>='a' && c<='z'||c>='A' && c<='Z'){
                a+=1;
            }
            else if(c>='0' &&c<='9'){
                n++;
            }
            else if(c==' '||c=='\t'||c=='\n'){
                ts++;
            }
            else
            ss++;
            data=f.read();
        }
    }
    catch (IOException e){
        System.out.println(e);
    }
        try{
            FileOutputStream out=new FileOutputStream("statistics.txt");
        
            String s1=String.format("num of alpha %d \n num of numbers %d\n num of ts %d\nnum of ssc%d\n",a,n,ts,ss);
        
            byte bytearray[]=s1.getBytes();
            out.write(bytearray);
        }
        catch(IOException e){
            System.out.println(e);
        }
    }
}