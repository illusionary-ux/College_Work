package JAVA_FINAL;
import java.util.Scanner;

public class Main_4 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        int flag=0;
        int x=in.nextInt();
        int y=in.nextInt();
        int z=in.nextInt();
        for(n=1;n<=100;n++) {
            //尾数相加等于18，其中两个数不相等，且3个尾数都能整除3，只有包含3，6，9符合；
            if((x+n)%10+(y+n)%10+(z+n)%10==18 &&(x+n)%10!=(y+n)%10 && (x+n)%10%3==0&& (y+n)%10%3==0&& (z+n)%10%3==0) {
                System.out.println(n);
                flag=1;
                break;
            }
        }
        if(flag==0) {
            System.out.printf("so sad!");
        }
    }
}