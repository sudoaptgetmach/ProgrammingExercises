package beecrowd.beginner;

import java.util.Scanner;

public class SquaredAndCubic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int inputs = sc.nextInt();
        int a1 = 1;

        for (int i = 0; i < inputs; i++) {
            System.out.printf("%d %d %d\n", a1, a1*a1, (a1*a1)*a1);

            a1 += 1;
        }
    }
}
