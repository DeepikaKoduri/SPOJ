import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		        int m[] = new int[1000];
        int w[] = new int[1000];
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            
            int sum=0;
            int n=in.nextInt();
            for(int j=0;j<1000;j++){
                m[j]=-1;
                w[j]=-1;
            }
            for(int j=0;j<n;j++){
                m[j]=in.nextInt();
            }
            java.util.Arrays.sort(m);
            
            for(int j=0;j<n;j++){
                w[j]=in.nextInt();
            }
            java.util.Arrays.sort(w);
            
            for(int j=999;j>=1000-n;j--){
                sum+=m[j]*w[j];
            }
            
            System.out.println(sum);
        }
	}
} 