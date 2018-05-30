import java.util.*;
import java.lang.*;
public class sums{
     public static void main(String aa[]){
     int n;
     Scanner p=new Scanner(System.in);
     n=p.nextInt();
     int a[]=new int[n];
     for(int i=0;i<n;i++){
         a[i]=p.nextInt();

     }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(a[i]+a[j]==a[k]){
                    System.out.printf("%d %d %d\n", a[i],a[j],a[k]);
                }
            }
        }
    }

    }

}
