import java.io.*;
import java.util.*;
class jaa{
    
	public static void main (String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        int su=0;
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
            su=su+a[i];
        }
        System.out.print(su);
        
	}
}
