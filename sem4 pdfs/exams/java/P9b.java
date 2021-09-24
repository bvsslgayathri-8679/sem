import java.util.*;
import java.lang.*;
import java.io.*;
class P9b{
    public static void main(String... arg) {
        String line="";
        try{
        BufferedReader br=new BufferedReader(new FileReader("data.csv"));
        ArrayList<Integer> li=new ArrayList<Integer>();
        while((line=br.readLine())!=null)   
        {

            String s[]=line.split(",");
            System.out.println(s[0]+" "+s[1]+" "+s[2]+" "+s[3]+" "+Integer.parseInt(s[2])*Integer.parseInt(s[3]));
            li.add(Integer.parseInt(s[3]));
            Collections.sort(li);
        }
         br.close();
    
        
        
        for(int i:li){
            try{
            
            BufferedReader br1=new BufferedReader(new FileReader("data.csv"));
            while((line=br1.readLine())!=null)
            {
                String s[]=line.split(",");
                if(Integer.parseInt(s[3])==i)
                {
                    System.out.println(s[0]+" "+s[1]+" "+s[2]+" "+s[3]+" "+Integer.parseInt(s[2])*Integer.parseInt(s[3]));

                }
            }
            br1.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
        }
    }
    catch(Exception e)
    {
        System.out.println(e);
    }

    }
}