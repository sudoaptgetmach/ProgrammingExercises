package beecrowd.beginner;

import java.util.Scanner;

public class CoordinatesofaPoint {

    public static void main(String[] args) {
        double x, y;
        Scanner scanner = new Scanner(System.in);

        x = scanner.nextDouble();
        y = scanner.nextDouble();

        if (x == 0 && y == 0) {
            System.out.print("Origem\n");
        } else if (x == 0) {
            System.out.println("Eixo Y\n");
        } else if (y == 0) {
            System.out.print("Eixo X\n");
        }

        if (x > 0 && y > 0) {
            System.out.print("Q1\n");
        } else if (x < 0 && y > 0) {
            System.out.print("Q2\n");
        } else if (x < 0 && y < 0) {
            System.out.print("Q3\n");
        } else if (x > 0 && y < 0) {
            System.out.print("Q4\n");
        }
        scanner.close();
    }
}
