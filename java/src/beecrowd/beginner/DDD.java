package beecrowd.beginner;

import java.util.HashMap;
import java.util.Scanner;

public class DDD {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<Integer, String> map = new HashMap<>();

        map.put(61, "Brasilia");
        map.put(71, "Salvador");
        map.put(11, "Sao Paulo");
        map.put(21, "Rio de Janeiro");
        map.put(32, "Juiz de Fora");
        map.put(19, "Campinas");
        map.put(27, "Vitoria");
        map.put(31, "Belo Horizonte");

        int input = sc.nextInt();

        System.out.println(map.getOrDefault(input, "DDD nao cadastrado"));

    }
}
