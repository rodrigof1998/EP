#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>


int main(void) 
{ 
	int N=100, count=0;
	int num[N], grades[20];
	do{
		printf("Insira a nota do aluno: ");
		scanf("%d",&num[count]); 
		count++;
	}while(count<100 && num[count-1]>=0 && num[count-1]<=20);
	printf("Saiu do while ");
	
	for(int i=0; i<count-1;i++){
		for(int j=0; j<=20;j++){
			if(num[i]==j){
				grades[j]=1;
			}
		}
	}
	
	printf("Grades histogram ");
	printf("-------------------------------------------"); 
		
	for(int i=20; i>=0;i--){
		printf("%d | ",grades[i]);
		for(int j=0; j<=grades[i];j++){
			printf("%d",grades[i]);
			//printf("*");			
		}
		printf("\n");
	}
	
  return 0;
}
