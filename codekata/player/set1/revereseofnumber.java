import java.util.Scanner;
class Main {
  public static void main(String[] args) {
   int n,i,rev=0;
   Scanner s=new Scanner(System.in);
   n=s.nextInt();
   while(n!=0)
  {
    i=n%10;
    rev=rev*10+i;
    n=n/10;
  }
  System.out.print(rev);
  }
}
