package URI;

public class Main {

    public static void main(String[] args) {
        double s = 0;
        int n1 = 1, pot = 0;

        while (n1 <= 39) {
            s += (double) n1 / Math.pow(2, pot);
            n1 += 2;
            pot++;
        }

        System.out.printf("%.2f\n", s);
    }
}
