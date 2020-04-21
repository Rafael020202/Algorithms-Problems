#include <stdio.h>
#include <string.h>

int main()
{
	char str1[4], str2[4];
	int col1, col2, lin1, lin2,difCol,difLin;
	scanf("%s%s",str1,str2);

	col1 = str1[0];
	col2 = str2[0];
	difCol = col2 - col1;

	lin1 = str1[1];
	lin2 = str2[1];
	difLin = lin2 - lin1;


	if(difCol == 1 && difLin == 2){
		if(col1 < 'h' && lin1 <= '6')
			printf("VALIDO\n");
	}

	else if(difCol == 1 && difLin == -2){
		if(col1 < 'h' && lin1 >= '3')
			printf("VALIDO\n");
	}
//--------------------------------------//
	else if(difCol == -1 && difLin == 2){
		if(col1 > 'a' && lin1 <= '6')
			printf("VALIDO\n");
	}

	else if(difCol == -1 && difLin == -2){
		if(col1 > 'a' && lin1 >= '3')
			printf("VALIDO\n");
	}
//--------------------------------------//
	else if(difCol == 2 && difLin == 1){
		if(col1 <= 'f' && lin1 < '8')
			printf("VALIDO\n");
	}

    else if(difCol == 2 && difLin == -1){
		if(col1 <= 'f' && lin1 > '1')
			printf("VALIDO\n");
	}

//--------------------------------------//

    else if(difCol == -2 && difLin == 1){
		if(col1 >= 'c' && lin1 < '8')
			printf("VALIDO\n");
	}

	  else if(difCol == -2 && difLin == -1){
		if(col1 >= 'c' && lin1 > '1')
			printf("VALIDO\n");
	}

    else
        printf("INVALIDO\n");

	return 0;
}
