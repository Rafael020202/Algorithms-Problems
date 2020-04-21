#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void arruma(char str[27]){

  if((str[0] == 'U') && (str[1] == 'R') && (str[3] == '\0')){
        if(str[2] != 'I')
            str[2] = 'I';
  }
  else if((str[0] == 'O') && (str[1] == 'B') && (str[3] == '\0')){
        if(str[2] != 'I')
            str[2] = 'I';
        }

  printf("%s ",str);
}


int main(){
  int i,c;
  char str[27];

  scanf("%d",&c);

if(c > 1){  
  
  for(i = 0; i < c; i++){
    scanf("%s", str);
    arruma(str);
  }

}else{
   
   if((str[0] == 'U') && (str[1] == 'R') && (str[3] == '\0')){
        if(str[2] != 'I')
            str[2] = 'I';
  }
  else if((str[0] == 'O') && (str[1] == 'B') && (str[3] == '\0')){
        if(str[2] != 'I')
            str[2] = 'I';
        }

  printf("%s",str);
}  

  printf("\n");

  return 0;
}
