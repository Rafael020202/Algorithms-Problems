#include <stdio.h>
#include <stdlib.h>

int comp(void const *, void const *);

int main(){
	int n,q,i,aux;
	
	while(scanf("%d%d",&n,&q) != EOF){
		int notas[n];
	
		for(i = 0; i < n; i++)
			scanf("%d",&notas[i]);
	
		qsort(notas,n,sizeof(int),comp);
	
		for(i = 0; i < q; i++){
			scanf("%d",&aux);
			printf("%d\n",notas[aux - 1]);
		}
	}
	
	return 0;
}

int comp(void const *p1, void const *p2){
	int *i = (int *)p1, *j = (int *)p2;
	
	if(*i > *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}