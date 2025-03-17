package beecrowd.beginner;

import java.util.ArrayList;
import java.util.Scanner;

public class EvenOddPositiveNegative {

    /*
    Make a program that reads five integer values. Count how many
    of these values are even, odd, positive and negative.
    Print this information like following example.
    */

    public static void main(String[] args) {

        int TENTATIVAS = 5;
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> nums = new ArrayList<>();

        for (int i = 1; i <= TENTATIVAS; i++) {
            int n = scanner.nextInt();
            nums.add(n);
        }

        int positive = (int) nums.stream()
                .filter(e -> e > 0)
                .count();

        int negative = (int) nums.stream()
                .filter(e -> e < 0)
                .count();

        int even = (int) nums.stream()
                .filter(e -> e % 2 == 0)
                .count();

        int odd = (int) nums.stream()
                .filter(e -> !(e % 2 == 0))
                .count();

        System.out.println(even + " valor(es) par(es)");
        System.out.println(odd + " valor(es) impar(es)");
        System.out.println(positive + " valor(es) positivo(s)");
        System.out.println(negative + " valor(es) negativo(s)");

    }
}
