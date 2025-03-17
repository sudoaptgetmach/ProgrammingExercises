package beecrowd.beginner;

import java.util.Arrays;
import java.util.Scanner;

public class triangletypes {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double[] sides = new double[3];
        sides[0] = scanner.nextDouble();
        sides[1] = scanner.nextDouble();
        sides[2] = scanner.nextDouble();
        Arrays.sort(sides);

        double a = sides[2];
        double b = sides[1];
        double c = sides[0];

        if (a >= (b + c)) {
            System.out.println("NAO FORMA TRIANGULO");
        } else {
            double v = Math.pow(b, 2) + Math.pow(c, 2);
            if (Math.pow(a, 2) == v) {
                System.out.println("TRIANGULO RETANGULO");
            } else if (Math.pow(a, 2) > v) {
                System.out.println("TRIANGULO OBTUSANGULO");
            } else if (Math.pow(a, 2) < v) {
                System.out.println("TRIANGULO ACUTANGULO");
            }
        }

        if (a == b && b == c) {
            System.out.println("TRIANGULO EQUILATERO");
        } else if (a == b || b == c || a == c) {
            System.out.println("TRIANGULO ISOSCELES");
        }
    }
}
