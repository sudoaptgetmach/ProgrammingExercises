package beecrowd.adhoc;

import java.util.Scanner;

public class Tacografo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int inputs = sc.nextInt();
        int result = 0;

        for (int i = 1; i <= inputs; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            result += (a * b);
        }

        System.out.println(result);
    }
}
