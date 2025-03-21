package beecrowd.adhoc;

import java.util.Scanner;

public class AvioesDePapel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int c = sc.nextInt();
        int p = sc.nextInt();
        int f = sc.nextInt();

        if (c*f > p) {
            System.out.println("N");
        } else {
            System.out.println("S");
        }
    }
}
