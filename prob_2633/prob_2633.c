#include <stdio.h>
#include <stdlib.h>

typedef struct carne {
	char nome[21];
	int validade;
} CARNE;

int QFunction(const void*, const void*);

int main() {
	int qtde;
	int i, primeiro;
	CARNE carne[11];
	
	while(scanf("%d", &qtde) != EOF) {
		primeiro = 1;
		
		for(i=0; i<qtde; i++) 
			scanf("%s %d", &carne[i].nome, &carne[i].validade);
		
		qsort(carne, qtde, sizeof(CARNE), QFunction);
		
		for(i=0; i<qtde; i++) {
			if ( primeiro ) {
				printf("%s", carne[i].nome);
				primeiro = 0;
			}else {
				printf(" %s", carne[i].nome);
			}
		}
		
		printf("\n");
		
	}
	
	
		
	return 0;
}

int QFunction(const void *a, const void *b) {
	CARNE *c1 = (CARNE *)a;
	CARNE *c2 = (CARNE *)b;
	
	if (c1->validade > c2->validade)
		return 1;
	else 
		if (c1->validade < c2->validade)
			return -1;
		else
			return 0;
}
