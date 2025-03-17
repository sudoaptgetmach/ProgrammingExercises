package beecrowd.beginner;

import java.util.Scanner;

public class HowMuchCassava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int curupira = 300 * sc.nextInt();
        int boitata = 1500 * sc.nextInt();
        int boto = 600 * sc.nextInt();
        int mapinguari = 1000 * sc.nextInt();
        int iara = 150 * sc.nextInt();

        System.out.println(225+(curupira+boitata+boto+iara+mapinguari));
    }
}
