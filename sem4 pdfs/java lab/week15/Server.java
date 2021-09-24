import java.io.*;  
import java.net.*;  

public class Server{
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
        
        System.out.println("client radius: "+a);
        Double r=Double.parseDouble(a);
        Double area=2*3.14*r;
        OutputStreamWriter osw=new OutputStreamWriter(s.getOutputStream());
        PrintWriter out=new PrintWriter(osw); 
        out.println(area);
        osw.flush();
        }
    }
        catch(Exception e){
            System.out.println(e);
        }
        

    }
} 