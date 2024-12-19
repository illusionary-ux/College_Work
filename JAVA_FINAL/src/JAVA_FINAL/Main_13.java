package JAVA_FINAL;
import java.util.Scanner;

public class Main_13 {

	private static final String[] ZODIAC_ANIMALS = {
	        "鼠", "牛", "虎", "兔", "龙", "蛇", "马", "羊", "猴", "鸡", "狗", "猪"
	    };

	    public static void main(String[] args) {
	        Scanner scanner = new Scanner(System.in);
	        try {
	            // 读取用户输入
	            int year = scanner.nextInt();

	            // 计算该年对应的生肖索引
	            // 因为公元4年是鼠年，所以我们以公元4年为起点进行计算
	            int zodiacIndex = (year - 4) % 12;
	            if (zodiacIndex < 0) { // 如果结果是负数，则加上12以得到正数索引
	                zodiacIndex += 12;
	            }

	            // 输出结果
	            System.out.println(ZODIAC_ANIMALS[zodiacIndex]);
	        } catch (Exception e) {
	            System.out.println("输入错误，请输入有效的年份！");
	        } finally {
	            scanner.close();
	        }
	    }
}