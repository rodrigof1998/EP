#include <stdio.h> 
 
int main(void) 
{ 
  int n; 
  int divisores=0;
  
  do{
	  printf("Insira um numero positivo: "); 
	  scanf("%d",&n);
    } while(n<=0);
 
  for(int i=1;i<=n;i++){
	  if(n%i==0){
		  divisores++;
		}
	}
	
  if(divisores>2){
	  printf("O numero %d não é primo\n",n);  
	}
	
	else{
		printf("O numero %d é primo\n",n);  
	}
		  
  return 0; 
} 

