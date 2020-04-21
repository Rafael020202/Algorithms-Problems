#include <stdio.h>
#include <string.h>

int main( ) {
	char str[100];
	
	int spaces;
	int i1, i2, i3, len;
	int aux;
	
	while(scanf("%s", str) != EOF) {	
		len = strlen(str);
		aux = len;
		spaces = 0;
		
		for(i1=0; i1<aux; i1++) {
			for(i2=0; i2<spaces; i2++) 
				printf(" ");
		
			for(i3=0; i3<len; i3++) {
				if(i3 != (len-1))
					printf("%c ", str[i3]);
				else
					printf("%c", str[i3]);
			}
			
			len--;
			spaces++;
			printf("\n");
		}
		printf("\n");
		
	}
	
	return 0;
}