import java.util.*;
import java.lang.*;
public class uniq {
     public static void main(String aa[]){
     char c;
     int n,i;
     Scanner s=new Scanner(System.in);
     n=s.nextInt();
     ArrayList<Character>a=new ArrayList<Character>();
     for(i=0;i<n;i++){
         c=s.next().charAt(0);
         a.add(c);
     }
     for(i=0;i<n;i++){
         if(Collections.frequency(a, a.get(i))==1){
             System.out.print(a.get(i));
         }
     }

    }

}
