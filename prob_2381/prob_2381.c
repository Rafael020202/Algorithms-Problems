#include <stdio.h>
#include <string.h>
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

    for(i = 0; i < n1; i++){
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

  int n,i,i2,menor,p;
  scanf("%d%d",&n,&p);

  struct lista {
    char nome[20];
  };

  struct lista aluno[n],aux;

  for(i = 0; i < n; i++)
    scanf("%s",&aluno[i]);

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

    printf("%s\n",aluno[p - 1].nome);



  return 0;
}
