import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
public static void main (String[] args) throws java.lang.Exception
{
	  int count=0;
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		str=str.replaceAll(" ","");
		int len=str.length();
	  for (Character c: str.toCharArray()) {
    if (c.equals('$')) {
    count++;
    }
    System.out.println(count);	
}
}
