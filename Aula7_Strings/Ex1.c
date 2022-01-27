#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main(void) 
{ 
printf("Insira uma palavra: ");
char line[32];

if(fgets(line,sizeof(line),stdin) != NULL)
{
// all went well, just process the line
}
char lineinv[strlen(line)];
for(int i=0; i<=strlen(line);i++){
		lineinv[i]=line[strlen(line)-1-i];
		
}

printf("%s\n",lineinv);

}
