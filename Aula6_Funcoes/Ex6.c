#include <stdio.h> 
#include <time.h>
#include<stdlib.h>
#include <unistd.h> //you need this for linux!
 
void waitFor (unsigned int secs) {
    unsigned int retTime = time(0) + secs;   // Get finishing time.
    while (time(0) < retTime);               // Loop until it arrives.
}

int countdown(int N){
	waitFor(1);	
	printf("%d...",N);
	if(N<1)
		return 0;
	return countdown(N-1);
	
}

int main(void) 
{ 
	int segundos;
	printf("Insira o numero de segundos da contagem decrescente: ");
	scanf("%d",&segundos);
	countdown(segundos);
 
  return 0; 
} 
