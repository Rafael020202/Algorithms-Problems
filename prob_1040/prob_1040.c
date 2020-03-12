#include <stdio.h>

int main(){
  float n1,n2,n3,n4,media,notaExame,media2;
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  n1 = n1 * 2;
  n2 = n2 * 3;
  n3 = n3 * 4;
  n4 = n4 * 1;

  media = (n1 + n2 + n3 + n4)/10;
  printf("Media: %.1f\n", media);

  if(media >= 7){
    printf("Aluno aprovado.\n");
    }else if(media < 5){
        printf("Aluno reprovado.\n");
        }else if(media >= 5 && media < 7){
            printf("Aluno em exame.\n");
            scanf("%f", &notaExame);
            printf("Nota do exame: %.1f\n", notaExame);
            media2 = (media + notaExame)/2;
             if(media2 > 5){
                printf("Aluno aprovado.\n");
                }else{printf("Aluno reprovado.\n");}
            printf("Media final: %.1f\n", media2);
        }

 return 0;
}
