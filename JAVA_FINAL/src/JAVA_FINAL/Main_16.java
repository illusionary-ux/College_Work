package JAVA_FINAL;

import java.util.Scanner;

public class Main_16 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // 获取用户输入的十进制数
        int decimalNumber = scanner.nextInt();
        String pentadecimal = decimalToPentadecimal(decimalNumber);
        
        // 输出转换后的十五进制数
        System.out.println(pentadecimal);
        
        scanner.close();
    }

    private static String decimalToPentadecimal(int decimal) {
        if (decimal == 0) return "0";

        StringBuilder pentadecimal = new StringBuilder();
        char[] digits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E'};
        
        while (decimal > 0) {
            pentadecimal.insert(0, digits[decimal % 15]);
            decimal /= 15;
        }
        
        return pentadecimal.toString();
    }
}
