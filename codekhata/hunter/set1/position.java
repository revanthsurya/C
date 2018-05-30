import java.util.*;
import java.lang.*;
public class odde{
     public static void main(String aa[]){
     int n;
     Scanner p=new Scanner(System.in);
     n=p.nextInt();
     int a[]=new int[n];
     for(int i=0;i<n;i++){
         a[i]=p.nextInt();
         
     }
     for(int i=0;i<n;i++){
         if(i%2==0){
             if(a[i]%2!=0){
                 System.out.print(a[i]);
             }
         }
         else if(i % 2 != 0)
         {
             if(a[i]%2==0){
                 System.out.println(a[i]);
             }
         }
     }

    }

}
