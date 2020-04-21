import java.util.Scanner;

public class Main{
  public static void main(String[] args){
	
	boolean p = true;
	float soma = 0;
	int v = 0;
	float media = 0;
	float nota = 0;
	
	
	while(p == true){
		Scanner input = new Scanner(System.in);
		nota = input.nextFloat();
		
		if(nota >= 0 && nota <= 10){
			soma += nota;
			v++;
			if(v == 2){
			  media = (soma)/2;	
			  System.out.printf("media = %.2f\n", media);
			  break;
		    }
		 }
		else if (nota < 0 || nota > 10){
		   System.out.println("nota invalida");
		   }
	}
  }
}
