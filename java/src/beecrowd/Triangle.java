package beecrowd;

import java.util.Scanner;

public class Triangle {

    /*
    Read three point floating values (A, B and C) and verify if is possible to make a triangle with them.
    If it is possible, calculate the perimeter of the triangle and print the message:
    Perimetro = XX.X

    If it is not possible, calculate the area of the trapezium which basis A and B and C as height,
    and print the message:
    Area = XX.X
    */

    public static void main(String[] args) {

        double a, b, c;
        Scanner scanner = new Scanner(System.in);

        a = scanner.nextDouble();
        b = scanner.nextDouble();
        c = scanner.nextDouble();

        if (a > 0 && b > 0 && c > 0) {
            if ((a + b) > c && (a + c) > b && (b + c) > a) {
//                double area = Math.sqrt(p*(p-a)*(p-b)*(p-c));
//                System.out.println("A=" + area); ??????????????????/ ELE PEDE PRA CALCULAR O TRAPÉZIO SE FORMAR UM QUADRADO, NAO A AREA, ANIMAL LEIA O EXERCICIO ANTES DE FAZER
                double perimetro = a + b + c;
                System.out.println("Perimetro = " + perimetro);
            } else {
                double area = (a + b) * c / 2;
                System.out.printf("Area = %.1f\n", area);
            }
        } else {
            System.out.println("Impossível determinar");
        }
    }
}
