#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>




int main(void) 
{ 
	int N=100, count=0, wanted, contador=0;
	//float media=0, sum1=0, variance=0, stdDeviation=0;
	int num[N];
	do{
		printf("Insira um numero: ");
		scanf("%d",&num[count]); 
		count++;
	}while(count<100 && num[count-1]>0);
	
	printf("Escreva o numero que quer ver quantas vezes existe: ");
	scanf("%d",&wanted); 
		
	for(int i=0; i<count-1;i++){
		if(num[i]==wanted){
			contador++;
		}
	}
	printf("O numero %d aparece %d vezes \n", wanted, contador);
	
  return 0;
}
