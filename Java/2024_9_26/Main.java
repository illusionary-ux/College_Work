import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // 创建并输入第一个矩阵
        Matrix matrix1 = new Matrix();
        matrix1.inputMatrix(scanner);
        
        // 创建并输入第二个矩阵
        Matrix matrix2 = new Matrix();
        matrix2.inputMatrix(scanner);
        
        // 相乘并显示结果
        Matrix result = matrix1.multiply(matrix2);
        result.display();
        
        scanner.close();
    }
}

class Matrix {
    private int rows, columns;
    private int[][] data;
    
    // 输入矩阵
    public void inputMatrix(Scanner scanner) {
        rows = scanner.nextInt();
        columns = scanner.nextInt();
        data = new int[rows][columns];
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                data[i][j] = scanner.nextInt();
            }
        }
    }
    
    // 矩阵乘法
    public Matrix multiply(Matrix other) {
        if (this.columns != other.rows) {
            throw new IllegalArgumentException("矩阵维度不匹配，无法相乘");
        }
        
        Matrix result = new Matrix();
        result.rows = this.rows;
        result.columns = other.columns;
        result.data = new int[result.rows][result.columns];
        
        for (int i = 0; i < result.rows; i++) {
            for (int j = 0; j < result.columns; j++) {
                for (int k = 0; k < this.columns; k++) {
                    result.data[i][j] += this.data[i][k] * other.data[k][j];
                }
            }
        }
        
        return result;
    }
    
    // 显示矩阵
    public void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (j > 0) System.out.print(" ");
                System.out.print(data[i][j]);
            }
            System.out.println();
        }
    }
}