import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner s=new Scanner(System.in);
    int n=s.nextInt();
    int i,last;
    int temp=n;
    int count=0;
    while(n!=0)
    {
      n=n/10;
      ++count;
    }
		if(count>=2)
		{
      i=Math.abs(temp/10);
		  last=i%10;
      System.out.print(last);
    }
    else if(count==1)
    {
      System.out.print("-1");
    }
			
		
  }
}
