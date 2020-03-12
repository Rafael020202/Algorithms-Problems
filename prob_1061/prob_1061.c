#include <stdio.h>
#include <stdlib.h>

int main(){
	struct evento{
		int dia;
		int hora;
		int minuto;
		int segundo;
	};
	
	struct evento e[2];
	int d, h, m, s;
	char aux[6];
	
	scanf("%s %d", aux, &e[0].dia);
	scanf("%d : %d : %d", &e[0].hora, &e[0].minuto, &e[0].segundo);
	scanf("%s %d", aux, &e[1].dia);
	scanf("%d : %d : %d", &e[1].hora, &e[1].minuto, &e[1].segundo);
	
	d = e[1].dia - e[0].dia;
	h = e[1].hora - e[0].hora;
	m = e[1].minuto - e[0].minuto;
	s = e[1].segundo - e[0].segundo;
	
	if(h < 0){
		d -= 1;
		h += 24;
	}
	if(m < 0){
		h -= 1;
		m += 60;
		if(h < 0){
			d -= 1;
			h = 23;
		}
	}
	
	if(s < 0){
		m -= 1;
		s += 60;
		if(m < 0){
			h = 23;
			d -= 1;
			m = 59;
		}	
	}
	
	
	printf("%d dia(s)\n", d);
	printf("%d hora(s)\n",h);
	printf("%d minuto(s)\n",m);
	printf("%d segundo(s)\n",s);
	
	return 0;
}