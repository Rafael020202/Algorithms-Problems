import java.util.Scanner;

public class Main
{
    public static  void main(String[] args)
    {
        int age=0,soma=0,cont=0;
        double media=0;

        Scanner input = new Scanner(System.in);
        age = input.nextInt();

        while (age >=0)
        {
            soma += age;
            cont++;
            age = input.nextInt();
        }

        media = (double) soma/cont;
        System.out.printf("%.2f\n", media);

    }

}
