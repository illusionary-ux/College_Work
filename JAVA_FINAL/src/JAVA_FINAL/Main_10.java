package JAVA_FINAL;

import java.util.Scanner;

public class Main_10 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int cnt = 0;
		if (n%2 == 0) {
			cnt++;
		}
		if (n%3 == 0) {
			cnt++;
		}
		switch (cnt){
		case 0: {
			System.out.printf("%d is not divisible by 2 and 3",n);
			break;
		}
		case 1:{
			System.out.printf("%d is divisible by 2 or 3, but not both",n);
			break;
		}
		case 2:{
			System.out.printf("%d is divisible by 2 and 3",n);
		}
		}
	}

}
