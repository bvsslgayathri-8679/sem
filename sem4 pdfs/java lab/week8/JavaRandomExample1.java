import java.util.Random;  
public class JavaRandomExample1 {  
    public static void main(String[] args) {  
        //create random object  
        Random random= new Random();  
        //returns unlimited stream of pseudorandom long values  
            System.out.println("Longs value : "+random.longs());  
       // Returns the next pseudorandom boolean value  
        boolean val = random.nextBoolean();  
        System.out.println("Random boolean value : "+val);  
        byte[] bytes = new byte[10];  
        //generates random bytes and put them in an array  
        random.nextBytes(bytes);  
        System.out.print("Random bytes = ( ");  
        for(int i = 0; i< bytes.length; i++)  
        {  
            System.out.printf("%d ", bytes[i]);  
        }  
        System.out.print(")");  
      //return the next pseudorandom integer value  
      System.out.println("Random Integer value : "+random.nextInt());  
      // setting seed  
      long seed =20;  
      random.setSeed(seed);  
      //value after setting seed  
      System.out.println("Seed value : "+random.nextInt());  
      //return the next pseudorandom long value  
      Long val1 = random.nextLong();  
      System.out.println("Random Long value : "+val1);  
    }  
}  