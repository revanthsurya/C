package coder;
import java.util.Scanner;
public class Arrayoutofbounds {
public static void main(String args[])
{
	int n;
	Scanner s=new Scanner(System.in);
	n=s.nextInt();
	int []arr=new int[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=s.nextInt();
	}
	try
	{
		int op=arr[6];
		System.out.println(op);
		
	}
	catch(ArrayIndexOutOfBoundsException e)
	{
		System.out.println("array size exceeded" +e);
	}
			
}

