import java.util.Scanner;

public class Main
{
  public static void main(String[] args)
 {
    boolean c = true;



   while(c == true){

     int n,m;

     Scanner dado = new Scanner(System.in);
     m = dado.nextInt();
     n = dado.nextInt();


      if(n > 0 && m > 0)
      {
         int a1,an;
         int soma = 0;

      if(m > n){

         a1 = n;
         an = m;

         while(a1 <= an)
         {
            System.out.print(a1 + " ");
            soma += a1;
            a1++;
         }

       }else if (n > m){

         a1 = m;
         an = n;

         while(a1 <= an)
         {
            System.out.print(a1 + " ");
            soma += a1;
            a1++;
         }
       }else{
          soma = 0;

       }
          System.out.print("SUM=" + soma + "\n");

       }else
       {
        c = false;
       }
      }
    }
  }
