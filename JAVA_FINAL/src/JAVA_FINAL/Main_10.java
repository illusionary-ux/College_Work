package JAVA_FINAL;
import java.util.*;
public class Main_10 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int sn = 0, pow = 6;
		for (int i = 0; i < n; i++) {
			sn += pow;
			pow = pow * 10 + 6;
			
		}
		System.out.print(sn);
		

	}

}
