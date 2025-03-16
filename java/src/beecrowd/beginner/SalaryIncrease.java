package beecrowd.beginner;

import java.util.Scanner;

public class SalaryIncrease {

    /*
       Read the employee's salary, calculate and print the new employee's salary,
       as well the money earned and the increase percentual obtained by the employee,
       with corresponding messages in Portuguese, as the below example.

       Novo salario: 460.00
       Reajuste ganho: 60.00
       Em percentual: 15 %
    */

    public static void main(String[] args) {

        double salary, rate, increase;
        Scanner scanner = new Scanner(System.in);

        salary = scanner.nextDouble();

        if (salary <= 400) {
            rate = 0.15;
            increase = salary * rate;
            salary = salary + (salary * rate);
        } else if (salary <= 800) {
            rate = 0.12;
            increase = salary * rate;
            salary = salary + (salary * rate);
        } else if (salary <= 1200) {
            rate = 0.10;
            increase = salary * rate;
            salary = salary + (salary * rate);
        } else if (salary <= 2000) {
            rate = 0.07;
            increase = salary * rate;
            salary = salary + (salary * rate);
        } else {
            rate = 0.04;
            increase = salary * rate;
            salary = salary + (salary * rate);
        }
        System.out.printf("Novo salario: %.2f\n", salary);
        System.out.printf("Reajuste ganho: %.2f\n", increase);
        System.out.println("Em percentual: " + (int) (rate * 100) + " %");
    }
}
