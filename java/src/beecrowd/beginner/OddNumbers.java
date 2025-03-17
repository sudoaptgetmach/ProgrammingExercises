package beecrowd.beginner;

import java.util.Scanner;

public class OddNumbers {

    /*
    Read an integer value X (1 <= X <= 1000).
    Then print the odd numbers from 1 to X, each one in a line, including X if is the case.
    */

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int input = scanner.nextInt();

        for (int i = 1; i <= input; i += 2) {
            System.out.println(i);
        }
    }
}
