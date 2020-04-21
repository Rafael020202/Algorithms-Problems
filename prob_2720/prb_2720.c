#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct presente {int id; int vol;};
int comp(const void *, const void *);
int comp2(const void *, const void *);

int main(){
	
	int m,n,k,i,i2,l,a,c;
	scanf("%d",&m);
	
	for(i2 = 0; i2 < m; i2++){
		scanf("%d%d",&n,&k);
		struct presente p[n];
		int ids[k];
	
		for(i = 0; i < n; i++){
			scanf("%d%d%d%d",&p[i].id,&l,&a,&c);
			p[i].vol = l*a*c;
		}
	
		qsort(p,n,sizeof(struct presente),comp);
	
		for(i = 0; i < k; i++){
			ids[i] = p[i].id;
		}
		
		qsort(ids,k,sizeof(int),comp2);
		
		for(i = 0; i < k; i++){
			if(i < (k - 1))
				printf("%d ",ids[i]);
			else
				printf("%d",ids[i]);
		}
		
		printf("\n");
	}
	
	

	return 0;
}


int comp(const void *p1, const void *p2){
	struct presente *i = (struct presente *)p1, *j = (struct presente *)p2;

	if(i->vol > j->vol)
		return  -1;
	else
		if(i->vol == j->vol){
			if(i->id < j->id)
				return -1;
		}
		else
			return 1;
	
}

int comp2(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	if(*i < *j)
		return -1;
	else
		return 1;
}