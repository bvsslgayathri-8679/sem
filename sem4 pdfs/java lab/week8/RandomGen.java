
import java.util.*;
class RandomGen
{
	public static void main(String args[])
	{
		int min = 2;
		int max = 10;
		Random rand = new Random();
		for(int i=1;i<=5;i++)
		{
			int num = rand.nextInt(max-min+1)+min;
			System.out.println("Random number between "+min+" and "+max+" is: "+num);
		}
	}
}