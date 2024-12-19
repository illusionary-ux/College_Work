package JAVA_FINAL;
import java.math.*;
import java.util.*;
public class Main_8 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String num1str = scanner.nextLine();
		String num2Str = scanner.nextLine();
		
		BigInteger num1 = new BigInteger(num1str);
		BigInteger num2 = new BigInteger(num2Str);
		
		BigInteger sum = num1.add(num2);
		
		System.out.println(num1 + "+" + num2 + "=" + sum);

	}

}
