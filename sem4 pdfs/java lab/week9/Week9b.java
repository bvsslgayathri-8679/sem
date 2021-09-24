import java.io.*;
import java.io.FileReader;  
import java.io.IOException;  

import java.io.BufferedReader;  

import java.util.*;
import java.lang.*;
class Week9b{
    public static void main(String... arg){
        String line="";
        try{
        BufferedReader br = new BufferedReader(new FileReader("data.csv")); 
        ArrayList<Integer> li=new ArrayList<Integer>();
        System.out.println("Before sort"); 
        while((line=br.readLine())!=null){
            String data[]=line.split(",");
            System.out.println(data[0]+" "+data[1]+" "+data[2]+" "+data[3]+" "+Integer.parseInt(data[3])*Integer.parseInt(data[2]));
            li.add(Integer.parseInt(data[3]));
        }
        br.close();
        Collections.sort(li);
        System.out.println("after sort");

        for(int i:li){
            try{
            BufferedReader br1 = new BufferedReader(new FileReader("data.csv")); 
            while((line=br1.readLine())!=null){
                

                
                String data[]=line.split(",");
                if(i==(Integer.parseInt(data[3]))){
                    System.out.println(data[0]+" "+data[1]+" "+data[2]+" "+data[3]+" "+Integer.parseInt(data[3])*Integer.parseInt(data[2]));
                }
            }
        }
            catch(Exception e){
                System.out.println(e);
            
            }
        }
    }
    catch(Exception e){
        System.out.println("no file found");
    }
    }
}