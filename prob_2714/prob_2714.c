#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  char ra[21],senha[21];
  int i,p = 0,check,cont,vezes;
  
  scanf("%d",&vezes);
  
 

	for(cont = 0; cont < vezes;cont++){
	
		scanf("%s", ra);
		if(strlen(ra) >= 20 && ra[0] == 'R' && ra[1] == 'A'){

			for(i = 2; i < strlen(ra); i++){
				if(isalpha(ra[i])){
					check = 0;
					break;
				}else
					check = 1;
			}

			if(check){
				for(i = 2; i < strlen(ra); i++){
					if(ra[i] != '0'){
						for(i; i < strlen(ra);i++){
							senha[p] = ra[i];
							p++;
						}	
					}
			}
				senha[p] = '\0';
				printf("%s\n",senha);
			}else
				printf("INVALID DATA\n");

		}else
			printf("INVALID DATA\n");
		
		p = 0;
		
	}
  return 0;
}


