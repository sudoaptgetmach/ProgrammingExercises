package beecrowd.adhoc;

import java.util.ArrayList;
import java.util.Scanner;

public class SequenciaSecreta {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<>();
        int inputs = sc.nextInt();
        int result = 0;

        list.add(inputs);

        for (int i = 0; i < inputs; i++) {
            int input = sc.nextInt();
            list.add(input);
            if (list.get(i) == input) {
                continue;
            } else {
                result = result + 1;
            }
        }

        System.out.println(result);
    }
}
