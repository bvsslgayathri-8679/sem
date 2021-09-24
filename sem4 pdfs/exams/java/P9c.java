import java.util.*;
import java.io.*;
class P9c{
    public static void main(String... arg){
        File f1=new File("stopwords.txt");
        File f2=new File("sample1.txt");
        ArrayList l1=new ArrayList();
        ArrayList l2=new ArrayList();
        try{
            Scanner sc=new Scanner(f1);
            while(sc.hasNext()){
                String a=sc.next();
                l1.add(a.toLowerCase());

            }
        }
        
        catch(Exception e){
            System.out.println(e);
        }

        try{
            Scanner sc1=new Scanner(f2);
            while(sc1.hasNext()){
                String a=sc1.next();
                if(l1.contains(a)||l2.contains(a)){
                    continue;
                }
                l2.add(a.toLowerCase());

            }

        }
        catch(Exception e){
            System.out.println(e);
        }
        Collections.sort(l2);
        System.out.println(l2);

    }
}