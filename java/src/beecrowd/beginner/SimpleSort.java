package beecrowd.beginner;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.stream.Stream;

public class SimpleSort {

    /*
        Read three integers and sort them in ascending order. After, print these values
        in ascending order, a blank line and then the values in the sequence as they were readed.
    */

    public static void main(String[] args) {

        ArrayList<Integer> nums = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        for (int i = 1; i <= 3; i++) {
            int n = Integer.parseInt(scanner.next());
            nums.add(n);
        }

        Stream<Integer> sortedlist = nums.stream()
                .sorted();

        sortedlist.forEach(System.out::println);
        System.out.println();
        nums.forEach(System.out::println);
    }
}
