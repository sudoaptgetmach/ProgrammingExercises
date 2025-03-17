package beecrowd.beginner;

import java.util.Scanner;

public class SimpleFactorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int inputs = sc.nextInt();
        int result = 1;

        for (int i = 1; i <= inputs; i++) {
            result *= i;
        }

        System.out.println(result);
    }
}
