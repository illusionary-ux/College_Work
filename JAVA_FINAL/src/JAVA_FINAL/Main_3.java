package JAVA_FINAL;
import java.util.Scanner;

public class Main_3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int max = scanner.nextInt(); // 读取输入的正整数
        int arr[] = new int[max];
        int cnt = 0;
        for (int i = 2; i < max; i++) {
			if (isPrime(i)) {
				arr[cnt++] = i;
			}
		}
        
        for (int j = 0; j < cnt; j++) {
			System.out.print(arr[j]);
			if ((j+1)%5==0) {
				System.out.println();
			}
			else {
				System.out.print("\t");
			}
				
			}
		}


    // 判断一个数是否是素数
    private static boolean isPrime(int num) {
        if (num < 2) return false; // 小于2的数不是素数
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) return false; // 如果能整除，说明不是素数
        }
        return true; // 否则是素数
    }
}