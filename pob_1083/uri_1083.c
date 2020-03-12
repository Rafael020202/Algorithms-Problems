#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct no { char val;
                    struct no *prox;
                  } No;

typedef struct pilha { No *topo;  
                       int qtde;  
                     } Pilha;

typedef struct fila {  No *inicio, *fim;  
                       int qtde;  
                    } Fila;

void IniciaPilha( Pilha* );
void push( Pilha*, char );
void pop( Pilha* );
void Posfixa( char* );
char ObterVal( Pilha* );
int Vazia( Pilha* );
int Sinal( char );
int CompSinal( char, char );
int Valido( char );
int ExpressaoValida( char* );


int main( )
{   char expressao[1001];
    int res;
	
	while( scanf( "%s", expressao ) != EOF ) {
		
		res = ExpressaoValida( expressao );
		
		if( res == -1 )
			printf( "Lexical Error!\n" );
		else if( res == 0 )
			printf( "Syntax Error!\n" );
		else
			Posfixa( expressao );			
	}
	
    return 0;
	
}


void IniciaPilha( Pilha *plh )
{   plh->qtde = 0;
    plh->topo = NULL;
}

void push( Pilha *plh, char v )
{   No *aux = ( No* ) malloc( sizeof(No) );
    
    aux->prox = plh->topo;
    aux->val = v;

    plh->topo = aux;
    plh->qtde++;
}

void pop( Pilha *plh )
{   No *aux = plh->topo;
    plh->topo = aux->prox;
    plh->qtde--;

    free( aux );
}

int Vazia( Pilha *plh ) 
{	return plh->topo == NULL;
}

char ObterVal( Pilha* plh )
{ 	return plh->topo->val;
}

int CompSinal( char snl01, char snl02  )
{   int s01, s02;

    s01 = Sinal( snl01 );
    s02 = Sinal( snl02 );

    if( s01 > s02 )
        return 1;
    else if( s01 < s02 )
        return -1;
    else
        return 0;

}

int Sinal( char snl )
{   if( snl == '^' )
        return 6;
    else if( snl == '*' || snl == '/' )
        return 5;
    else if( snl == '+' || snl == '-' )
        return 4;
    else if( snl == '>' || snl == '<' || snl == '#' || snl == '=' )
        return 3;
    else if( snl == '.' )
        return 2;
    else if( snl == '|' )
        return 1;
	else
		return 0;
}

int Valido( char c )
{	return isalpha(c) || isdigit(c) 
		  || c == '(' || c == ')'
		  || c == '.' || c == '='
		  || c == '|' || c == '/'
		  || c == '+' || c == '*'
		  || c == '-' || c == '^'
		  || c == '#' || c == '>'
		  || c == '<';
}

int ExpressaoValida( char *str )
{	int i, contAbrt, contFech, contOperador, 
	contOperando, lexical, sintax;
	
	contFech = 0;
	contAbrt = 0;
	contOperador = 0;
	contOperando = 0;
	lexical = 0;
	sintax = 0;
	
	for( i=0; i<strlen(str); i++ )
	{	if( Valido( str[i] ) )
		{	if( isalpha(str[i]) || isdigit(str[i]) )
			{	if( Sinal(str[i+1]) || str[i+1] == ')' 
					|| str[i+1] == '\0'
				  )
					contOperando++;
				else
					sintax = 1;
			}
			else
			{	if( str[i] == '(' )
				{	if( isalpha(str[i+1]) 
						|| isdigit(str[i+1]) 
						|| str[i] == '('
					)
					{	contAbrt++;
					}
					else
						sintax = 1;
				}
				else if( str[i] == ')' )
				{	if( str[i+1] == '\0' 
						|| Sinal( str[i+1] ) > 0
						|| str[i+1] == ')'
					)
					{	contFech++;
					}
					else
						sintax = 1;	
				}
				else
				{	if( str[i+1] == '('
						|| isalpha(str[i+1]) 
						|| isdigit(str[i+1])
					)
					{ contOperador++;
					}
					else
						sintax = 1;
				}
			}
		}
		else
		{	lexical = 1;
			break;
		}
	}
	
	
	if( lexical == 1 && sintax == 1 )
			return -1;
		else if( lexical == 1 )
			return -1;
		else if( sintax == 1 )	
			return 0;
		else if( contAbrt != contFech )
			return 0;
		else if( contOperador != contOperando - 1 )
			return 0;
		else
			return 1;
	
	
}

void Posfixa( char *str )
{   Pilha plh;
    IniciaPilha( &plh );

    int i;
	char aux;
	
    for( i=0; i<strlen( str ); i++ ) 
	{	if( isalpha( str[i] ) || isdigit( str[i] ) )
				printf( "%c", str[i] );
			else if( str[i] != ')' )
			{   if( !Vazia( &plh ) ) 
				{	aux = ObterVal( &plh );
				
					if( aux != '(' && str[i] != '(' ) 
					{	if( CompSinal( str[i], aux ) == 1 ) 
							push( &plh, str[i] );
						else 
						{	while( !Vazia( &plh )&&
								   CompSinal( str[i], ObterVal( &plh )) != 1
								 )
							{	printf( "%c" ,ObterVal( &plh ) );
								pop( &plh );	
							}
							
							push( &plh, str[i] );
												
						}
					}
					else
					{	push( &plh, str[i] );
					}
				}
				else 
				{	push( &plh, str[i] );
				}
			}
			else 
			{	while( !Vazia( &plh ) )
				{	aux = ObterVal( &plh );
					
					if( aux == '(' )
					{	pop( &plh );	
						break;
					}
					else
						printf( "%c", aux );
					pop( &plh );
				}
			}
		
	}
	
	if( !Vazia(&plh) )
	{	while( !Vazia(&plh) )
		{	printf( "%c", ObterVal(&plh) );
			pop( &plh );
		}
	}
	printf("\n");
}




