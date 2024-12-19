package JAVA_FINAL;
import java.util.*;
public class Main_9 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		double n = scanner.nextDouble();
		scanner.close();
		if (n < 0) {
			System.out.print("Invalid input");
		}
		else {
			System.out.printf("%.2f",n*0.06);
			
		}

	}

}
