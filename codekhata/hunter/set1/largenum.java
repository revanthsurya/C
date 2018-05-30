import java.util.*;
public class large{
      public static void main(String aa[]){
            int n,m;
            Scanner p=new Scanner(System.in);
            n=p.nextInt();
            LinkedHashSet<Integer>d=new LinkedHashSet<Integer>();
            for(int i=0;i<n;i++){
                m=p.nextInt();
                d.add(m);
            }
            ArrayList<Integer>a=new ArrayList<Integer>(d);
            Collections.sort(a,Collections.reverseOrder());
            for(int j:a){
                System.out.print(j);
            }

    }
}
