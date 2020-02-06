#include <stdio.h>

int main(void){
	printf("Donnez une lettre\n");
	char lettre;
	scanf("%c", &lettre);
	
	switch(lettre){
		case 'a':
		case 'e':
		case 'u':
		case 'o':
		case 'i':
		case 'y': 
			printf("voyelle\n");
		break;
		default : 
			printf("consonne\n");
	}
}