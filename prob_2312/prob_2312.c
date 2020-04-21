#include <stdio.h>
#include <string.h>

int main(){

	struct medalhas {
		char pais[30];
		int ouro;
		int prata;
		int bronze;
	};

	int n,maior,i,i2,i3,i4,ctr;
	char str1[30],str2[30];
	scanf("%d",&n);
	struct medalhas p[n],aux;

	for(i = 0; i < n;i++){
		scanf("%s",&p[i].pais);
		scanf("%d",&p[i].ouro);
		scanf("%d",&p[i].prata);
		scanf("%d",&p[i].bronze);
	}
	i = 0;
	i2 = 0;

    while(i < n){
		maior = i;
		i2 = i + 1;
		while(i2 < n){
			if((p[i2].ouro > p[maior].ouro))
					maior = i2;
			else if((p[i2].ouro == p[maior].ouro) && (p[i2].prata > p[maior].prata))
					maior = i2;
			else if((p[i2].ouro == p[maior].ouro) && (p[i2].prata == p[maior].prata) && (p[i2].bronze > p[maior].bronze))
					maior = i2;
			else if((p[i2].ouro == p[maior].ouro) && (p[i2].prata == p[maior].prata) && (p[i2].bronze == p[maior].bronze)){
                    strcpy(str1,p[maior].pais);
                    strcpy(str2,p[i2].pais);
                    for(i3 = 0; i3 < strlen(str1);i3++){
                        if(str1[i3] > str2[i3]){
                            maior = i2;
                            break;
                        }
                        else if( str1[i3] < str2[i3]){
                            break;
                        }
                    }
			}


            i2++;
		}
		aux = p[i];
		p[i] = p[maior];
		p[maior] = aux;
		i++;
	}

	for(i = 0; i < n;i++){
        printf("%s %d %d %d\n",p[i].pais,p[i].ouro,p[i].prata,p[i].bronze);
	}
	return 0;
}
