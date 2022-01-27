#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int matchPattern(char *str, char *pattern){
	int counter=0;
	for(int i=0; i<=strlen(str);i++){
		//printf("%d",i);
		if(isdigit(str[i]) && isdigit(pattern[i])){
			counter++;
			//printf("Entrou no numero");
		}
		if(isalpha(str[i]) && isalpha(pattern[i])){
			counter++;
			//printf("Entrou na letra");
		}
	}
	//printf("%d",counter);
	if(counter==6)
		return 1; 
	return 0;
	
}

int main(void) 
{ 
	printf("Introduza uma matricula portuguesa:");
	char line[32];
	if(fgets(line,sizeof(line),stdin) != NULL)
	{
	// all went well, just process the line
	}
	char padrao[32]="AA-00-00";
	
	if(matchPattern(line, padrao)){
		printf("A matricula é compativel\n"); 
	}else{
		printf("A matricula não é compativel\n"); 
	}
	
	

}


