import java.io.*;  
import java.util.*;
import java.net.*;  

public class Client{
    public static void main(String... arg) throws Exception{
        
        String ip="localhost";
        int port=6666;
        Socket s=new Socket(ip,port);
        Scanner sc=new Scanner(System.in);
        System.out.println("enter radius of circle");
        float r=sc.nextInt();
        OutputStreamWriter osw=new OutputStreamWriter(s.getOutputStream());
        PrintWriter out=new PrintWriter(osw);
        out.println(r);
        osw.flush();

        BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
        String a=br.readLine();
        System.out.println("Perimeter of circle is"+a);
    }
} 