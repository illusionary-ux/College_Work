package JAVA_FINAL;
import java.util.*;

public class Main_5{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		int arr[] = new int[8];
		for (int i = 0; i < arr.length; i++) {
			arr[i] = scanner.nextInt();
		}
		
		for (int i = 0; i < arr.length - 1; i++) {
			for (int j = 0; j < arr.length - 1 - i; j++) {
				if (arr[j] > arr[j+1]) {
					int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
				}
			}
			printTools.PrintArray(arr);
		}
	}

}
class printTools{
    static int n;
    public static void PrintArray(int a[]){
        n=a.length;
        for(int i=0;i<=a.length-1;i++){
            if(i==0){
                System.out.print(a[i]);
            }
            else{
                System.out.print(" "+a[i]);
            }
        }
        System.out.println();
    }
}