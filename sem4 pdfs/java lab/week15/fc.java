import java.io.*;  
import java.util.*;
import java.net.*;  

public class fc{
    public static void main(String... arg) throws Exception{
        
        String ip="localhost";
        int port=6666;
        Socket s=new Socket(ip,port);
        Scanner sc=new Scanner(System.in);
        System.out.println("number n ");
        int r=sc.nextInt();
        OutputStreamWriter osw=new OutputStreamWriter(s.getOutputStream());
        PrintWriter out=new PrintWriter(osw);
        out.println(r);
        osw.flush();

        BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
        String a=br.readLine();
        System.out.println("Factorial is"+a);
    }
} 