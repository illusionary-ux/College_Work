package JAVA_FINAL;

class Thread_test extends Thread
{
    int number;
    public static int sum;
    public Thread_test(int n) //构造函数
    {
        number=n;
    }
    public static synchronized void add(int num){  //同步方法
        sum += num;
        }
    public void run()
    {
        int count=0;
        for(int i=0;i<10;i++)
        {
            count+=number+i;
        }
        System.out.println("The "+((int)number/10+1)+" time: "+count);
        add(count);
    }
    
}

/* 请在这里填写答案 */
public class Main_3 {
    public static void main(String[] args) {
        // 创建并启动10个线程
        Thread_test[] threads = new Thread_test[10];
        for (int i = 0; i < 10; i++) {
            threads[i] = new Thread_test(i * 10 + 1); // 每个线程的起始值分别为1, 11, 21, ..., 91
            threads[i].start();
        }

        // 等待所有线程执行完成
        for (int i = 0; i < 10; i++) {
            try {
                threads[i].join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        // 输出总和
        System.out.println("Total is " + Thread_test.sum);
    }
}
