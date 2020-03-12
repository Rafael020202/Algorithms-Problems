#include<stdio.h>

typedef struct fracao {
	int num;
	int den;
} FRACAO;

FRACAO Soma(FRACAO , FRACAO);
FRACAO Subtracao(FRACAO, FRACAO);
FRACAO Multiplicacao(FRACAO , FRACAO);
FRACAO Divisao(FRACAO , FRACAO);
int MDC(int , int );
FRACAO Simplifica(FRACAO);

int main(){
	FRACAO f01, f02;
	char op;
	int n,i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d / %d %c %d / %d", &f01.num, &f01.den, 
				&op, &f02.num, &f02.den);
		
		FRACAO f;
		
		if(op == '+') 
			f = Soma(f01, f02);
		else if(op == '-')
			f = Subtracao(f01, f02);
		else if(op == '*')
			f = Multiplicacao(f01, f02);
		else
			f = Divisao(f01, f02);
		
		
		FRACAO s = Simplifica(f);
		
		printf("%d/%d = %d/%d\n", f.num, f.den, s.num, s.den);
	}
	
	return 0;
}


FRACAO Soma(FRACAO f01 , FRACAO f02) {
	FRACAO r;
	
	r.num = (f01.num*f02.den) + (f02.num*f01.den);
	r.den = f01.den * f02.den;
	
	return r;
}

FRACAO Subtracao(FRACAO f01 , FRACAO f02) {
	FRACAO r;
	
	r.num = (f01.num*f02.den) - (f02.num*f01.den);
	r.den = f01.den * f02.den;
	
	return r;
}

FRACAO Multiplicacao(FRACAO f01 , FRACAO f02) {
	FRACAO r;
	
	r.num = f01.num * f02.num;
	r.den = f01.den * f02.den;
	
	return r;
}

FRACAO Divisao(FRACAO f01 , FRACAO f02) {
	FRACAO r;
	
	r.num = f01.num*f02.den;
	r.den = f02.num*f01.den;
	
	return r;
}

FRACAO Simplifica(FRACAO f) {
	int mdc = MDC(f.num, f.den);
	
	f.num = f.num/mdc;
	f.den = f.den/mdc;
		
	if(f.den < 0) {
		f.num *= -1;
		f.den *= -1;
	}
		
	return f;
}

int MDC(int n01, int n02) {
	int n03;
	
	if( n01 < n02 ) 
		return MDC(n02, n01);
	
	while(n01 % n02 != 0) {
		n03 = n01%n02;
		n01 = n02;
		n02 = n03;
	}
	
	return n02;
}

