package beecrowd.adhoc;

import java.util.Scanner;

public class Corrida {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int c = sc.nextInt();
        int n = sc.nextInt();

        System.out.println(c%n);
    }
}
