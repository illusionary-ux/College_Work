package JAVA_FINAL;
import java.util.*;
public class Main_6 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] count = new int[101];
		for (int i = 0; i < n; i++) {
			int tmp = scanner.nextInt();
			count[tmp]++;
		}
		
		int giftCount = 0;
		for (int i = 0; i <= 98; i++) {
			while(count[i] > 0 && count[i + 1] > 0 && count[i + 2] > 0)
			{
				giftCount++;
				count[i]--;
				count[i+1]--;
				count[i+2]--;
			}
		}
		
		System.out.println(giftCount);
		scanner.close();
	}

}
