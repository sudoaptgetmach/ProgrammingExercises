package beecrowd.beginner;

import java.util.Scanner;

public class Multiples {

     /*
     Read two integer values (A and B). After, the program should print the message
     "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.
     */
     public static void main(String[] args) {

         Scanner scanner = new Scanner(System.in);
         int a = scanner.nextInt();
         int b = scanner.nextInt();

         if (Math.max(a, b) % Math.min(a, b) == 0) {
             System.out.println("Sao Multiplos");
         } else {
             System.out.println("Nao sao Multiplos");
         }
     }
}
