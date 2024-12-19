package JAVA_FINAL;

import java.util.Scanner;

public class Main_11 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		System.out.print(GCD.GetGCD(a, b));
	}

}
class GCD{
	public static int GetGCD(int a, int b) {
		if (b == 0) {
			return a;
		}
		else {
			return GetGCD(b, a%b);
		}
	}
}