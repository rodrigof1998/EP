#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void) 
{ 
printf("Insira uma nome de um clube: ");
char line[128];

if(fgets(line,sizeof(line),stdin) != NULL)
{
// all went well, just process the line
}
int counter=0;
for(int i=0; i<=strlen(line);i++){
	if(counter<3){
		if(i==0){
			printf("%c",line[i]);
			counter++;
		}
		if(line[i]==' ' && line[i+1]!=' ' && line[i+2]!=' ' && line[i+3]!=' '){
			printf("%c",line[i+1]);
			counter++;
		}
	}
}
printf("\n");

}
