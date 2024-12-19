package JAVA_FINAL;

import java.util.Scanner;

public class Main_12 {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		int decimal = scanner.nextInt();
		String resultString = Integer.toHexString(decimal).toUpperCase();
		
		System.out.print(resultString);
	}
}
