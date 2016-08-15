//count doubles

import java.util.HashMap;
import java.util.Map;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
 
public class Main{
 
     public static void main(String []args) throws IOException{
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(reader.readLine());
        while(t-->0){
            int count=0;
            int n=Integer.parseInt(reader.readLine());
            HashMap<Integer,Boolean> hm=new HashMap<Integer, Boolean>(n);
            String input=reader.readLine();
            StringTokenizer tokenizer = new StringTokenizer(input);
            for(int i=0;i<n;i++){
                while(tokenizer.hasMoreTokens()){
                    int num=Integer.parseInt(tokenizer.nextToken());
                    hm.put(num,true);
                }
            }
            
            
            for(int k : hm.keySet()){
                if(hm.get(k*2) != null) {
                    count++;
                }
            }
            System.out.println(count);
        }
     }
}