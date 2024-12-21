package outros;

import java.util.*;

public class Atividade {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        HashMap<String, Integer> votos = new HashMap<>();

        String numero = String.valueOf(scanner.nextLine());
        int votosCandidato = scanner.nextInt();

        String numero2 = String.valueOf((int) (Math.random() * 100));
        int votosCandidato2 = (int) (Math.random() * 50000);

        votos.put(numero, votosCandidato);
        votos.put(numero2, votosCandidato2);

        System.out.println(votos);

        String maxKey = votos.entrySet()
                .stream()
                .max(Map.Entry.comparingByValue())
                .map(Map.Entry::getKey)
                .orElse(null);

        String minKey = votos.entrySet()
                .stream()
                .min(Map.Entry.comparingByValue())
                .map(Map.Entry::getKey)
                .orElse(null);

        System.out.println("Total de votos da eleição: " + (votosCandidato + votosCandidato2));
        System.out.println("Candidato com mais votos: " );
        System.out.println("Número do candidato: " + maxKey);
        System.out.println("Votos: " + votos.get(maxKey));
        System.out.println("Candidato com menos votos: ");
        System.out.println("Número do candidato: " + minKey);
        System.out.println("Votos: " + votos.get(minKey));
    }
}