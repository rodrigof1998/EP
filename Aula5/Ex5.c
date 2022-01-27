#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>




int main(void) 
{ 
	int N=100, count=0, contador=0;
	int num[N];
	
	do{
		printf("Insira um numero: ");
		scanf("%d",&num[count]); 
		count++;
	}while(count<100 && num[count-1]>0);
	
	for(int i=0; i<count;i++){
		contador=1;
		for(int j=i+1; j<count;j++){
			if(num[i]==num[j]&&num[i]!=-1){
				contador++;
				num[j]=-1;
			}
		}
		if(num[i]!=-1){
			printf("O numero %d ocorre %d vezes.\n", num[i],contador);
		}
		
	}		
	
  return 0;
}
