package beecrowd;

import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class PositivesandAverage {

    private static final int TENTATIVAS = 6;

    public static void main(String[] args) {

        ArrayList<Float> lista = new ArrayList<>();

        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < TENTATIVAS; i++) {
            float input = Float.parseFloat(scanner.nextLine());
            lista.add(input);
        }

        int integers = (int) lista.stream()
                        .filter(n -> n > 1)
                                .count();

        double sum = lista.stream()
                        .filter(n -> n > 1)
                                .mapToDouble(Float::floatValue)
                                        .sum();

        float result = (float) (sum / integers);

        System.out.printf(integers + " valores positivos\n");
        DecimalFormat df = new DecimalFormat("#.#");
        System.out.printf(df.format(result) + "\n");


        scanner.close();
    }
}
