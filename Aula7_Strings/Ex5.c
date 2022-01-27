#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_vowel(char a)
{
  if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    return 1;
  else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    return 1;
  else    // You may omit this else as the control comes here if the character is not a vowel.
    return 0;
}
int check_consonante(char a)
{
  if (a == 'B' || a == 'C' || a == 'D' || a == 'F' || a == 'G'|| a == 'H'|| a == 'J'|| a == 'K'|| a == 'L'|| a == 'M'|| a == 'N'|| a == 'P'|| a == 'Q'|| a == 'R'|| a == 'S'|| a == 'T'|| a == 'V'|| a == 'W'|| a == 'Y'|| a == 'X'|| a == 'Z')
    return 1;
  else if (a == 'b' || a == 'c' || a == 'd' || a == 'f' || a == 'g'|| a == 'h'|| a == 'j'|| a == 'k'|| a == 'l'|| a == 'm'|| a == 'n'|| a == 'p'|| a == 'q'|| a == 'r'|| a == 's'|| a == 't'|| a == 'v'|| a == 'w'|| a == 'y'|| a == 'x'|| a == 'z')
    return 1;
  else    // You may omit this else as the control comes here if the character is not a vowel.
    return 0;
}

int main(void) 
{ 
	printf("Phrease analysis:");
	printf("\n	phrase -> ");
	char line[128];
	if(fgets(line,sizeof(line),stdin) != NULL)
	{
	// all went well, just process the line
	}
	int minusculas=0;
	int maiusculas=0;
	int numeros=0;
	int vogais=0;
	int consoantes=0;

	for(int i=0; i<=strlen(line);i++){
		if(islower(line[i]))
			minusculas++;
		if(isupper(line[i]))
			maiusculas++;
		if(isdigit(line[i]))
			numeros++;
		if(check_vowel(line[i]))
			vogais++;
		if(check_consonante(line[i]))
			consoantes++;
	}
	printf("	number of lowercase characters -> %d",minusculas);
	printf("\n	number of uppercase characters -> %d",maiusculas);
	printf("\n	number of numeric characters -> %d",numeros);
	printf("\n	number of vowels -> %d",vogais);
	printf("\n	number of consonantes -> %d\n",consoantes);

}

