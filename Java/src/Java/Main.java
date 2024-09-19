public static void Transform(String s1, String s2, int[] a, int[] b)  //两个数组的对齐处理
public static int[] BigNumAdd(int[] a, int[] b)  //两个数组的加法
public static void Display(int[] a)
import java.util.Iterator;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        String tempa, tempb;
        
        Scanner input = new Scanner(System.in);
        tempa = input.nextLine();
        tempb = input.nextLine();
        
        int c = Math.max(tempa.length(), tempb.length());
        int[] a = new int[c] ;
        int[] b = new int[c];
        int[] result = new int[c+1];
        Transform(tempa, tempb, a, b);
        result = BigNumAdd(a,b);
        
        Display(result);
        
        
    }
    public static void Transform(String s1, String s2, int[] a, int[] b)
    {
    	int len_s1 = s1.length(), len_s2 = s2.length();
    	int max_length = Math.max(len_s1, len_s2);
    	
    	for(int i = 0; i < max_length; i++)
    	{
    		if (len_s1 < max_length) {
    			a[i] = 0;
			}
    		else {
				a[i] = s1.charAt(i - (max_length - len_s1)) - '0';
			}
    	}
    	
    	
    	for(int i = 0; i < max_length; i++)
    	{
    		if (len_s2 < max_length) {
    			b[i] = 0;
			}
    		else {
				b[i] = s2.charAt(i - (max_length - len_s2)) - '0';
			}
    	}
    	
    }
    public static int[] BigNumAdd(int[] a, int[] b)
    {
    	int len_a = a.length,len_b = b.length;
    	int max_len = Math.max(len_a, len_b);
    	int[max_len + 1] result;
    	for(int i = 0;i < max_len; i++)
    	{
    		
    	}
    	
    }
    public static void Display(int[] a)
    {
    	for(int i:a)
    	{
    		System.out.print(a);
    	}
    }

}