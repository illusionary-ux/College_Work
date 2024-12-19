package JAVA_FINAL;
import java.util.*;
public class Main_2 {

	public static void main(String[] args) {
		// 数字到拼音的映射
        String[] pinyin = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
        
        Scanner sc = new Scanner(System.in);
        
        // 读取整数的数量
        int count = sc.nextInt();
        
        // 准备存储输入的整数
        StringBuilder output = new StringBuilder();
        
        // 循环读取每个整数，并转换为对应的拼音
        for (int i = 0; i < count; ++i) {
            if (i > 0) output.append(" "); // 在不是第一个元素时添加空格
            
            // 直接获取拼音
            output.append(pinyin[sc.nextInt()]);
        }
        
        // 输出结果
        System.out.println(output.toString());
        
        sc.close();
    }

}
