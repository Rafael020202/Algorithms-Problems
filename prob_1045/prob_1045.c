#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,lA/*(a)*/,lB/*(b)*/,lC/*(c)*/;
  scanf("%f %f %f",&a,&b,&c);

/*##########ANÁLISE DOS VALORES###############*/
  /*POSSIBILIDADES PARA a SENDO O MAIOR*/
  if(a > b && a > c && b > c ){
      lA = a;
      lB = b;
      lC = c;
    }else if(a > b && a > c && c > b){
       lA = a;
       lB = c;
       lC = b;
     }
  /*POSSIBILIDADES PARA b SENDO O MAIOR*/
  if(b > a && b >c && a > c){
    lA = b;
    lB = a;
    lC = c;
  }else if(b > a && b > c && c > a){
    lA = b;
    lB = c;
    lC = a;
  }
  /*POSSIBILIDADES PARA c SENDO O MAIOR*/
  if(c > a && c > b && b > a){
    lA = c;
    lB = b;
    lC = a;
  }else if(c > a && c > b && a > b){
    lA = c;
    lB = a;
    lC = b;
  }
  /*POSSIBILIDADES PARA a = b*/
  if(a == b && a > c && b > c){
    lA = a;
    lB = b;
    lC = c;
 }else if (a == b && a < c && c > b){
    lA = c;
    lB = b;
    lC = a;
  }
  /*POSSIBILIDADES PARA a = c*/
  if(a > b && a == c && c > b){
    lA = a;
    lB = c;
    lC = b;
  }else if(a < b && a == c && b > c){
    lA = b;
    lB = a;
    lC = c;
  }
  /*POSSIBILIDADES PARA b = c*/
  if(a > b && b == c){
    lA = a;
    lB = b;
    lC = c;
 }else if(a < b && b == c){
    lA = b;
    lB = c;
    lC = a;
}
 /*POSSIBILIDADES PARA a = c = b*/
 if(a == b && a == c && b == c){
    lA = a;
    lB = b;
    lC = c;
}
/*####################################*/

  if(lA >= lB + lC){
    printf("NAO FORMA TRIANGULO\n");
  }else {
   if(pow(lA,2)== pow(lB,2) + pow(lC,2)){
    printf("TRIANGULO RETANGULO\n");
  }else if(pow(lA,2) > pow(lB,2) + pow(lC,2)){
    printf("TRIANGULO OBTUSANGULO\n");
  }else if(pow(lA,2) < pow(lB,2) + pow(lC,2)){
    printf("TRIANGULO ACUTANGULO\n");
  }if(lA == lB && lB == lC && lA == lC){
    printf("TRIANGULO EQUILATERO\n");
  }else if(lA == lB || lA == lC || lB == lC){
    printf("TRIANGULO ISOSCELES\n");
  }
}
 return 0;
}
