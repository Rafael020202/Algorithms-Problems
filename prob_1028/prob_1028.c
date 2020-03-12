#include <stdio.h>

int mdc(int x, int y){
    int n1,n2,mdc = 1;
    
    if(x < y){
    	n1 = x;
    	n2 = y; 	
    }
    else{
    	n1 = y;
    	n2 = x;
   
    }

 	while(n2%n1 != 0){
    	mdc = n2%n1;
    	n2 = n1;
    	n1 = mdc;
    }
    return n1;
}


int main(){
    int n,i,x,y;
    scanf("%d",&n);

    for(i = 0; i < n; i++){
    	scanf("%d %d",&x,&y);
    	printf("%d\n",mdc(x,y));
    }

  return 0;
}
