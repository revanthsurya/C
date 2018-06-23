import java.util.Scanner;
class Main {
  public static void main(String[] args) {
   int n,fact=1,i;
   Scanner s=new Scanner(System.in);
   n=s.nextInt();
   for(i=1;i<=n;i++)
  {
    fact*=i;
  }
  System.out.print(fact);
  }
}
