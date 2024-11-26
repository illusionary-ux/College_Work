package JAVA_FINAL;
import java.util.*;
public class Main_7 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] arr = new int[n];
		for(int i = 0; i < n;i++)
		{
			arr[i] = scanner.nextInt();
		}
		Arrays.sort(arr);
		
		for (int i = 1; i < arr.length - 1; i++) {
			System.out.print(arr[i]);
			if (i < n - 2) {
				System.out.print(" ");
				
			}
		}
	}

}
