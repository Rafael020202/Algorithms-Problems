#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int comparar(char str1[], char str2[]){
    int i,n1,n2;

    if(strlen(str1) > strlen(str2)){
        n1 = strlen(str1);
        n2 =  strlen(str2);
    }
    else{
        n2 = strlen(str1);
        n1 =  strlen(str2);
    }

    for(i = 2; i < n1; i++){
        if(str1[i] < str2[i]){
            return 1;
            break;
        }
        else if(str2[i] < str1[i]){
            return 0;
            break;
        }
    }
}

int main(){
  int n,i,i2,menor,cont1 = 0,cont2 = 0;
  scanf("%d",&n);

  struct lista {
     char id;
     char nome[25];
  };
  struct lista aluno[n],aux;
  char auxNome[25],carac[n];

  for(i = 0; i < n; i++){
      scanf(" %25[^\n]", aluno[i].nome);
      strcpy(auxNome,aluno[i].nome);
      carac[i] = auxNome[0];
  }

  i = 0;
  while(i < n){
    i2 = i + 1;
    menor = i;
    while(i2 < n){
        if(comparar(aluno[i2].nome,aluno[menor].nome)){
            menor = i2;
        }
    i2++;
    }
    aux = aluno[i];
    aluno[i] = aluno[menor];
    aluno[menor] = aux;
    i++;
  }

  for(i = 0; i < n; i++){
    strcpy(auxNome, aluno[i].nome);
    for(i2 = 2; i2 < strlen(auxNome);i2++)
        printf("%c",auxNome[i2]);
    printf("\n");
  }

  for(i = 0; i < n; i++){
    if(carac[i] == '+')
        cont1++;
    else
        cont2++;
  }

  printf("Se comportaram: %d | Nao se comportaram: %d\n",cont1,cont2);

  return 0;
}
