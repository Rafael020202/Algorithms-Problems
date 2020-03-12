#include <stdio.h>

_Bool comparador(char s1[], char s2[]){
  int c = 0;

  while(s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0'){
    c++;
 }
    if(s1[c] == '\0' && s2[c] == '\0'){
        return 1;

    }else {
        return 0;
    }

}



int main(){

 char str1[30], str2[30], str3[30];
 scanf("%s %s %s", &str1, &str2, &str3);

 /*################################VERTEBRADO#############################################*/
 if(comparador(str1,"vertebrado") && comparador(str2,"ave") && comparador(str3,"carnivoro")){
    printf("aguia\n");
    }else if(comparador(str1,"vertebrado") && comparador(str2,"ave") && comparador(str3,"onivoro")){
        printf("pomba\n");
        }else if(comparador(str1,"vertebrado") && comparador(str2,"mamifero") && comparador(str3,"onivoro")){
            printf("homem\n");
            }else if(comparador(str1,"vertebrado") && comparador(str2,"mamifero") && comparador(str3,"herbivoro")){
                printf("vaca\n");
                }
/*####################################################################################################################*/

 /*################################INVERTEBRADO#############################################*/
 if(comparador(str1,"invertebrado") && comparador(str2,"inseto") && comparador(str3,"hematofago")){
    printf("pulga\n");
    }else if(comparador(str1,"invertebrado") && comparador(str2,"inseto") && comparador(str3,"herbivoro")){
        printf("lagarta\n");
        }else if(comparador(str1,"invertebrado") && comparador(str2,"anelideo") && comparador(str3,"hematofago")){
            printf("sanguessuga\n");
            }else if(comparador(str1,"invertebrado") && comparador(str2,"anelideo") && comparador(str3,"onivoro")){
                printf("minhoca\n");
                }
/*####################################################################################################################*/


 return 0;
}
