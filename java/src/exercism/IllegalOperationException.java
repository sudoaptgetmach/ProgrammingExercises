package exercism;

public class IllegalOperationException extends Exception {
    public IllegalOperationException(String message, Throwable cause) {
        super(message, cause);
    }

    public IllegalOperationException(String message) {
        super(message);
    }
}

class CalculatorConundrum {
    public String calculate(int operand1, int operand2, String operation) throws IllegalOperationException {

        String calculate;
        int op;

        switch (operation) {
            case "+":
                op = operand1 + operand2;
                calculate = operand1 + " " + operation + " " + operand2 + " = " + op;
                break;
            case "*":
                op = operand1 * operand2;
                calculate = operand1 + " " + operation + " " + operand2 + " = " + op;
                break;
            case "/":
                if (operand1 == 0 || operand2 == 0) {
                    throw new IllegalOperationException("Division by zero is not allowed", new ArithmeticException("Division by zero"));
                }
                op = operand1 / operand2;
                calculate = operand1 + " " + operation + " " + operand2 + " = " + op;
                break;
            case null:
                throw new IllegalArgumentException("Operation cannot be null");
            case "":
                throw new IllegalArgumentException("Operation cannot be empty");
            default:
                throw new IllegalOperationException("Operation '" + operation + "' does not exist");
        }
        return calculate;
    }
}