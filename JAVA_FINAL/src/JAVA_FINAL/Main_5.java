package JAVA_FINAL;
import java.util.*;
public class Main_5 {

	public static void main(String[] args) {
		String string;
		Scanner scanner = new Scanner(System.in);
		string = scanner.nextLine();
		int letter = 0,digits = 0;
		for(int i = 0;i < string.length(); i++)
		{
			char tmp = string.charAt(i);
			if (Character.isLetter(tmp)) {
				letter++;
			}else if (Character.isDigit(tmp)) {
				digits++;
			}
		}
		System.out.println(letter + " " + digits);
		scanner.close();
	}

}