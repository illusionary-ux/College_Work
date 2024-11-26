package JAVA_FINAL;
import java.util.*;
public class Main_9 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
        int[] students = new int[n];

        // 读取学生学号
        for (int i = 0; i < n; i++) {
            students[i] = scanner.nextInt();
        }

        // 创建两个列表分别存储第一列和第二列的学号
		
		List<Integer> column1 = new ArrayList<>();
        List<Integer> column2 = new ArrayList<>();
		
		for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                column1.add(students[i]); // 报1的同学
            } else {
                column2.add(students[i]); // 报2的同学
            }
        }

        // 输出第一列的学号
        for (int i = 0; i < column1.size(); i++) {
            System.out.print(column1.get(i));
            if (i < column1.size() - 1) {
                System.out.print(" "); // 保证最后一个数字后没有空格
            }
        }
        System.out.println(); // 换行

        // 输出第二列的学号
        for (int i = 0; i < column2.size(); i++) {
            System.out.print(column2.get(i));
            if (i < column2.size() - 1) {
                System.out.print(" "); // 保证最后一个数字后没有空格
            }
        }
    }
}
