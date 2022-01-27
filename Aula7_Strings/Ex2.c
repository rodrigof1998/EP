#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void) 
{ 
printf("Insira uma frase: ");
char line[128];

if(fgets(line,sizeof(line),stdin) != NULL)
{
// all went well, just process the line
}
//char lineinv[strlen(line)];
for(int i=0; i<=strlen(line);i++){
	if(line[i]==' '){
		line[i+1]=toupper(line[i+1]);
	}
	if(i==0){
		line[i]=toupper(line[i]);
	}
		
}

printf("%s\n",line);

}
