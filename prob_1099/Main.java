import java.util.Scanner;

public class Main
{
 public static void main(String[] args)
 {
    Scanner dado = new Scanner(System.in);
    int nEntrada = dado.nextInt();

    int a1;
    int an;
    int soma = 0;

    for(int cont = 1; cont <= nEntrada; cont++)
    {
       int x = dado.nextInt();
       int y = dado.nextInt();

       if(x < y)
       {
            a1 = x;
            an = y;


            while(a1 < an)
            {
               a1++;

               if(a1%2 != 0 && a1 != an)
               {
                 soma += a1;
               }

            }

       }else if(y < x)
       {
           a1 = y;
           an = x;

                while(a1 < an)
                {
                    a1++;

                    if(a1%2 != 0 && a1 != an)
                    {
                      soma += a1;
                    }
                }

       } else
       {
         soma = 0;
       }
       System.out.println(soma);
       soma = 0;
    }
  }
}