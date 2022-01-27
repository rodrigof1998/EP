#include <stdio.h> 
#include <stdlib.h> 


//Trabalho realizado por:
//Rodrigo Dinis Martins Ferreira
//N.Mec:84142

int main(void) 
{ 
	//int X=100;
	//int num[X];
	int N=0, soma=0, divisores=0, aparece=0;
	int numbers[]={1,9,5,7,9,6,7,3,9,3};
	int moreNumbers[]={10,3,2,5,11,5,2,7,8,4};
	
	printf("a)\n"); 			//Alinea a
	do{
		printf("number between [1 and 12]? ");
		scanf("%d",&N); 
	}while(N<=1 || N>=12);
	printf("N= %d\n", N);
	
	printf("\nb)\n"); 			//Alinea b
	for(int i=1; i<=N;i++){
		soma+=i;
	}
	printf("sum of all numbers between 1 and %d: %d\n", N, soma);
	
	printf("\nc)\n");			//Alinea c
	printf("dividers: ");
	
	for(int i=1;i<=N;i++){
	  if(N%i==0){
		  divisores++;
		  if(i!=N){
			  printf(" %d;",i);
		  }
		}
	}	
	if(divisores>2){
		printf("\n%d is not prime\n",N);  
	}
	else{
		printf("\n%d is prime\n",N);  
	}
	printf("\nd)\n");			//Alinea d
	for(int i=0;i<10;i++){
		if(numbers[i]==N){
			aparece++;
		}
	}
	printf("%d exists %d times in the array numbers\n",N, aparece);  
	
	printf("\ne)\n");			//Alinea e
	for(int i=0;i<10;i++){
		printf("%-4d|%4d|",numbers[i], moreNumbers[i]);
		if(numbers[i]>moreNumbers[i]){
			printf(" greater\n");
		}
		if(numbers[i]<moreNumbers[i]){
			printf(" lower\n");
		}
		if(numbers[i]==moreNumbers[i]){
			printf(" equal\n");
		}
	}
	
	
  return 0;
}

