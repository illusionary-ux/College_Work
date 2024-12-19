package JAVA_FINAL;

import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

class Student implements Comparable<Student> {
    private String name;
    private int height;

    public Student(String name, int height) {
        this.name = name;
        this.height = height;
    }

    // Getter for name
    public String getName() {
        return name;
    }

    // Getter for height
    public int getHeight() {
        return height;
    }

    @Override
    public int compareTo(Student other) {
        return Integer.compare(this.height, other.height);
    }

    @Override
    public String toString() {
        return name + " " + height;
    }
}

public class Main_15 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the number of students
        int numStudents = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        LinkedList<Student> students = new LinkedList<>();

        // Read each student's data and add to the list
        for (int i = 0; i < numStudents; i++) {
            String line = scanner.nextLine();
            String[] parts = line.split(" ");
            String name = parts[0];
            int height = Integer.parseInt(parts[1]);
            students.add(new Student(name, height));
        }

        // Sort the students by height
        Collections.sort(students);

        // Output the sorted students
        System.out.println("排序后：");
        for (Student student : students) {
            System.out.println(student.getName() + " " + student.getHeight());
        }

        scanner.close();
    }
}