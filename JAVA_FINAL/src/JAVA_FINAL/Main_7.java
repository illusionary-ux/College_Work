package JAVA_FINAL;
import java.util.*;
public class Main_7 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String input = scanner.nextLine();
		
		String[] word = input.split(" ");
		
		StringBuilder output = new StringBuilder();
		
		for (int i = word.length - 1; i >= 0; i--) {
			output.append(word[i]);
			if (i != 0) {
				output.append(" ");
			}
		}
		
		System.out.print(output.toString());

	}

}
