package beecrowd;

import java.util.ArrayList;
import java.util.Scanner;

public class Interval2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> intervals = new ArrayList<>();

        int inputs = scanner.nextInt();

        for (int i = 0; i < inputs; i++) {
            intervals.add(scanner.nextInt());
        }

        int in = (int) intervals.stream().filter(x -> x >= 10 && x <= 20).count();
        int out = (int) intervals.stream().filter(x -> x < 10 || x > 20).count();

        System.out.printf("""
                %d in
                %d out
                """, in, out);
    }
}
