import java.util.*;
import java.lang.*;
import java.math.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		   Scanner in = new Scanner(System.in);
	        int n=10;
	        while(n>0) {
            BigInteger A = new BigInteger(in.next());
            BigInteger B = new BigInteger(in.next());
            BigInteger K = (A.add(B)).divide(new BigInteger("2"));
            BigInteger N = A.subtract(K);
            System.out.println(K.toString());
            System.out.println(N.toString());
            n--;
        }
	}
} 