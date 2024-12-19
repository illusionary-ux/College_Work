package JAVA_FINAL;
import java.util.*;

public class Main_6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int arr[] = new int[8]; // 定义8个整数的数组
        for (int i = 0; i < arr.length; i++) { // 输入8个整数
            arr[i] = scanner.nextInt();
        }

        // 选择排序实现
        for (int i = 0; i < arr.length; i++) {
            int minIndex = i; // 假设当前位置是最小值
            for (int j = i + 1; j < arr.length; j++) { // 查找未排序部分的最小值
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            // 如果找到的最小值索引与当前索引不同，则进行交换
            if (minIndex != i) {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
            printTools.PrintArray(arr); // 打印中间过程
        }
        scanner.close();
    }
}

class printTools {
    static int n;

    public static void PrintArray(int a[]) {
        n = a.length;
        for (int i = 0; i <= a.length - 1; i++) {
            if (i == 0) {
                System.out.print(a[i]);
            } else {
                System.out.print(" " + a[i]);
            }
        }
        System.out.println();
    }
}
