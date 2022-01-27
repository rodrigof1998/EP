#include <stdio.h> 
 
int main(void) 
{ 
  int n; 
  int somaDivisores=0;
  
  do{
	  printf("Insira um numero positivo: "); 
	  scanf("%d",&n);
    } while(n<=0);
 
  for(int i=1;i<n;i++){
	  if(n%i==0){
		  somaDivisores +=i;
		  printf("%d é divisor de %d\n",i,n);  
		}
	}
	
  if(somaDivisores>n){
	  printf("O numero %d é abundante\n",n);  
	}
  if(somaDivisores<n){
	  printf("O numero %d é deficiente\n",n);   
	}
  if(somaDivisores==n){
	  printf("O numero %d é perfeito\n",n);   
	}
	
		  
  return 0; 
} 
