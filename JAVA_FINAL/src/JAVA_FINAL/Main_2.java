package JAVA_FINAL;
import java.util.Scanner;
public class Main_2 {

	public static void main(String[] args) {
		int a, n , sum = 0;
		Scanner scanner = new Scanner(System.in);
		int pow = 1;
		a = scanner.nextInt();
		n = scanner.nextInt();
		for(int i = 0; i < n;i++)
		{
			sum += pow * a;
			pow = pow * 10 + 1;
		}
		System.out.print(sum);
		scanner.close();
	}

}
