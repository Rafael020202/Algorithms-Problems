#include <stdio.h>
#include <string.h>

int main(){
  char str[50],str2[50];
  int i = 0,ctrLines = 0, n = 0, qtdLines[50];
  int ctrPoints = 0,n2 = 0,qtdPoints[50];

  scanf("%s",str);
  while(i < strlen(str)){
    while(str[i] == '='){
        ctrLines++;
        i++;
    }
    if(ctrLines == 3){
        str2[n] = '-';
        ctrLines = 0;
    }
    else if(ctrLines == 1){
        str2[n] = '.';
        ctrLines = 0;
    }

    while(str[i] == '.'){
        ctrPoints++;
        i++;
    }
    if(ctrPoints == 3){
        str2[n + 1] = 's';
        ctrPoints = 0;
        n += 2;
    }
    if(ctrPoints == 6){
        str2[n + 1] = 'S';
        ctrPoints = 0;
        n += 2;
    }
  }
  str2[n] = '\0';
  puts(str2);

  return 0;
}
