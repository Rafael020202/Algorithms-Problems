import java.util.Scanner;

public class Main{

public static void main(String[] args){

  Scanner input = new Scanner(System.in);
  int n = input.nextInt();

  for(int cont = 1; cont <= n; cont++){

  int x,y;
  x = input.nextInt();
  y = input.nextInt();

  float xf = x;
  float yf = y;
  float div;


  if(y != 0){

    div = xf/yf;
    System.out.printf("%.1f\n", div);

  }else
      System.out.println("divisao impossivel");

    }
  }
}