#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,i2,ctr = 1;
	struct monte{
		int distancia;
		int tonalidade;
	};
	
	scanf("%d",&n);
	struct monte m[n];
	
	for(i = 0; i < n; i++){
		scanf("%d%d",&m[i].distancia,&m[i].tonalidade);
	}
	
	i = 0;
	while(i < n){
		i2 = i + 1;
		while(i2 < n){
			if(m[i2].tonalidade == m[i].tonalidade){
			   if(m[i2].distancia != m[i].distancia){
				  ctr = 0;  
				  break;
			   }  
			}
			else if(m[i2].tonalidade > m[i].tonalidade){
				    if(m[i2].distancia > m[i].distancia){
					   ctr = 0;	
					   break;
					}   
			}
			else if(m[i2].tonalidade < m[i].tonalidade){
			if(m[i2].distancia < m[i].distancia){
					ctr = 0;		
					break;
				}	
			}
			i2++;
		}
		if(ctr == 0)	
			break;
	 i++;
	}		
	
	if(ctr)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}