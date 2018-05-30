import java.util.*;
import java.lang.*;
public class posnegsum{
     public static void main(String aa[]){
     int n;
     Scanner p=new Scanner(System.in);
     n=p.nextInt();
     int a[]=new int[n];
     for(int i=0;i<n;i++){
         a[i]=p.nextInt();

     }
     LinkedHashSet<Integer>b=new LinkedHashSet<Integer>();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+a[j]==0){
             b.add(a[i]);
             b.add(a[j]);

            }
        }
    }
     for(int j:b){
         System.out.printf("%d ",j);
     }

    }

}
