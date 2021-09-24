import java.io.*;  
import java.net.*;  

public class fs{
    public static void main(String... arg) throws Exception {
        System.out.println("server is started");
        try{
        ServerSocket ss=new ServerSocket(6666);
        System.out.println("server is waiting for client request");
        while(true){

        Socket s=ss.accept();
        
        System.out.println("client connected");
        BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
        String a=br.readLine();
        
        System.out.println("enter num: "+a);
        int r=Integer.parseInt(a);
        int f =1;
        for(int i=1;i<=r;i++)
        f*=i;

        
        OutputStreamWriter osw=new OutputStreamWriter(s.getOutputStream());
        PrintWriter out=new PrintWriter(osw); 
        out.println(f);
        osw.flush();
        }
    }
        catch(Exception e){
            System.out.println(e);
        }
        

    }
} 