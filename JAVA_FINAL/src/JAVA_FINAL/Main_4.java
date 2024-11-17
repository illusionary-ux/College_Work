package JAVA_FINAL;
import java.util.*;

public class Main_4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m, n;
        m = scanner.nextInt();
        n = scanner.nextInt();
        int flag = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (2 * i + 4 * j == n && i + j == m) {
                    flag = 1;
                    System.out.println(i + " " + j); // 使用字符串拼接，输出每组解
                    break;
                }
            }
        }

        if (flag == 0) {
            System.out.print("No Answer");
        }

        scanner.close();
    }
}
