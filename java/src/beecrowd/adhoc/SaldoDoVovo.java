package beecrowd.adhoc;

import java.util.ArrayList;
import java.util.Scanner;

public class SaldoDoVovo {
    public static void main(String[] args) {
        int n, saldo;
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<>();

        n = sc.nextInt(); saldo = sc.nextInt();

        for (int i = 0; i < n; i++) {
            saldo += sc.nextInt();
            list.add(saldo);
        }

        System.out.println(list.stream().min(Integer::compare).orElse(saldo));
    }
}
