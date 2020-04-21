#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct string {
	char str[30];
	int tamanho;
} String;

typedef struct stringList {
	String arr[60];
	int qtde;
} StringList;

void Iniciar( StringList* );
void Adicionar( StringList*, char* );
void Imprimir( StringList* );
int EhTautograma( StringList* );

int main() {
	char c, s[30];
	int p;
	StringList strLst;
	
	Iniciar( &strLst );
	p = 0;
	
	while( 1 ) {
		scanf("%c", &c);
		
		if( c == '*' ) {
			break;
		}
		
		if ( c != ' ' && !iscntrl(c) ) {
			s[p] = tolower(c);
			p++;
		}else{
			s[p] = '\0';
			Adicionar( &strLst, s );
			//printf( "%s\n", s );
			p = 0;
			
			if( iscntrl(c) ) {								
				if(EhTautograma( &strLst )) {
					printf( "Y\n" );
				}else {
					printf( "N\n" );
				}
	
				Iniciar( &strLst );
			}
		}
	}
	
	return 0;
}

int EhTautograma( StringList *strList ) {
	char c = strList->arr[0].str[0];
	int i, r;

	r = 1;
	for ( i=1; i<strList->qtde; i++ ) {
		
		if( strList->arr[i].str[0] != c ) {
			r = 0;
			break;
		}
	}
	
	return (r == 1);
	
}

void Iniciar( StringList *strLst ) {
	strLst->qtde = 0;
}

void Adicionar( StringList *strLst, char *str ) {
	strcpy( strLst->arr[strLst->qtde].str, str );
	strLst->qtde++;
}

/*void Imprimir( StringList *lst ) {
	int i;
	for ( i=0; i<lst->qtde; i++ ) {
		printf( "%c\n", lst->arr[i].str[0] );
	}
}*/
