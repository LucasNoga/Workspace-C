#include<stdio.h>

int main(void){
	int chiffre = 0;
	do{
		printf("%d\n", chiffre);
		chiffre++;
	}
	while (chiffre < 10);
		chiffre = 0;
		while (chiffre < 10){
			printf("%d\n", chiffre);
			chiffre++;
		}
}