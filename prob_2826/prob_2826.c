#include <stdio.h>
#include <string.h>

int main(){

  char str1[21],str2[21];
  int i,result;
  scanf("%s%s",str1,str2);

  if(!strcmp(str1,str2))
    printf("%s\n%s\n",str1,str2);

  else if(str1[0] > str2[0])
     printf("%s\n%s\n",str2,str1);

  else if(str1[0] < str2[0])
     printf("%s\n%s\n",str1,str2);

  else if(str1[0] == str2[0]){
    for(i = 0; i < strlen(str1); i++){
        if(str1[i] < str2[i]){
            result = 1;
            break;
        }else
            result = -1;
    }
    if(result == -1){
        for(i = 0; i < strlen(str2); i++){
          if(str2[i] < str1[i]){
            result = 2;
            break;
          }else
            result = 0;
        }
    }

    if(result == 1)
        printf("%s\n%s\n",str1,str2);
    else if(result == 2)
        printf("%s\n%s\n",str2,str1);
    else{
        if(strlen(str1) > strlen(str2))
            printf("%s\n%s\n",str2,str1);
        else
            printf("%s\n%s\n",str1,str2);


  }


  return 0;

    }
}
