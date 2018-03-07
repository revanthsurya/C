import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		String str1=str.replaceAll(" ","");
		int len=str1.length();
		System.out.println(len);
	}
}
