package testt;
import java.util.Scanner;
public class Temp {
public static void main(String Args[])
{
	Scanner s=new Scanner(System.in);
	int a=s.nextInt();
	int b=s.nextInt();	
	try
	{
		int c;
		c=b/a;
	}
	catch(ArithmeticException e)
	{
		System.out.println("it is arithmetic exp");
	}
}
}
