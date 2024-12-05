package exercism;

class Darts {
    int score(double xOfDart, double yOfDart) {

        double distance_square = (xOfDart * xOfDart) + (yOfDart * yOfDart);
        int score;

        if (distance_square > 100) {
            score = 0;
        } else if (distance_square > 25) {
            score = 1;
        } else if (distance_square > 1) {
            score = 5;
        } else {
            score = 10;
        }

        return score;
    }
}
