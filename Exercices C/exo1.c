#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Fonction pour saisir la note*/
void saisie_note(int* note){
	/*donne une adresse et on specifie que c'est un entier sinon il prend ca comme un caractere*/
	scanf("%d", note);
}

/*Fonction pour afficher la note*/
void affichage_note(int* note){
	printf("votre note est %d\n", *note);
	/*Test si la note est inferieur a 10*/
	if(*note < 10){
		print("votre note est en dessous de la moyenne\n");
	}
}

/*le main*/
int main(void){
	int * note = (int*) malloc(sizeof(int));
	printf("Saisissez votre note: ");
	saisie_note(note);
	affichage_note(note);
	return EXIT_SUCCESS;
}