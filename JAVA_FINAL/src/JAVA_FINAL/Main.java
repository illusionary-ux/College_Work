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

public class Main{
	public static void main(String[] args) {
		Thread_test[] threads = new Thread_test[10];
		for (int i = 0; i < 10; i++) {
			threads[i] = new Thread_test(i * 10 + 1);
			threads[i].start();
		}
		
		
		for (int i = 0; i < 10; i++) {
            try {
                threads[i].join(); // 主线程等待子线程结束
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
		System.out.println("Total is " + Thread_test.sum);
	}
}