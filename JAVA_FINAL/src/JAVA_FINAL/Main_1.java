package JAVA_FINAL;
import java.util.*;

public class Main_1 {

	public static void main(String[] args) {
		int num;
		Scanner scanner = new Scanner(System.in);
		num = scanner.nextInt();
		System.out.print(num + "=");
		for (int i = 2; i <= num; i++) {
			while (num % i == 0) {
				System.out.print(i);
				num /= i;
				if (num != 1) {
					System.out.print("*");
				}
			}
		}
		scanner.close();
	}
}