package beecrowd.beginner;

import java.util.Scanner;

public class LogicalSequence {
    public static void main(String[] args) {
        int total, j = 1, c = 1, n = 1;
        Scanner sc = new Scanner(System.in);
        total = sc.nextInt();

        for (int i = 0; i < total*2; i++) {

            

            System.out.printf("%d %d %d\n", j, c, n);

            if (i % 2 == 0) {
                System.out.printf("%d %d %d\n", j+1, c+1, n+1);
            }
        }
    }
}
