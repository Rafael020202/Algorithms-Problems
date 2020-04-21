package URI;

public class Main {

    public static void main(String[] args) {
        double s = 0, aux;
        int i;

        for (i = 1; i <= 100; i++) {
            aux = (double) 1 / i;
            s += aux;

        }

        System.out.printf("%.2f\n", s);
    }
}
