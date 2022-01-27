#include <stdio.h> 
 
 
int binary(int n){
	int a[10],i;   
	for(i=0;n>0;i++){    
		a[i]=n%2;    
		n=n/2;    
	}    
	printf("\nBinary of Given Number is=");    
	for(i=i-1;i>=0;i--)    
	{    
		printf("%d",a[i]);    
	}
	printf("\n");
	return 0;    
}


int main(void) 
{ 
	int numero;
	printf("Insira um numero inteiro positivo: ");
	scanf("%d",&numero);
	binary(numero);  
	
  return 0; 
} 
