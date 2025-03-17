package beecrowd.beginner.OBI;

import java.util.Scanner;

public class NotasDaProva {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int input = scanner.nextInt();

        String grade = switch (input) {
            case int n when (n > 85) -> "A";
            case int n when (n > 60) -> "B";
            case int n when (n > 35) -> "C";
            case int n when (n > 0)  -> "D";
            default -> "E";
        };

        System.out.println(grade);
    }
}
