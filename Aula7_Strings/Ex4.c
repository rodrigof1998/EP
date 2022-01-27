#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int palindrome(){
	printf("Insira texto: ");
	char line[32];
	if(fgets(line,sizeof(line),stdin) != NULL)
	{
	// all went well, just process the line
	}
	int counter=0;

	for(int i=0; i<=strlen(line);i++){
		if(line[i]==line[strlen(line)-i-2]){
			//printf(" %c,%c ",line[i],line[strlen(line)-i-2] );
			counter++;
		}
	}
	//printf("\n%ld", strlen(line));
	//printf("\n%d", counter);
	if(counter==strlen(line)){
		printf("O texto é um palindrome\n");
		return 1;
	}else{
		printf("O texto não é um palindrome\n");
		return 0;
	}	
}

int main(void) 
{ 
	palindrome();

}
