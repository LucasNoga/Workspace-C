#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Fonction pour saisir la note*/
void saisie_note(int * note){
	/*donne une adresse et on specifie que c'est un entier sinon il prend ca comme un caractere*/
	scanf("%d", note);
}

/*Fonction pour afficher la note*/
void affichage_note(int *note){
	/*Test si la note est comprise entre 0 et 20*/
	if(*note > 0 && *note < 20 ){
	printf("votre note est %d\n", *note);
		/*Test si la note est inferieur à 10*/
		if(*note < 10){
			printf("votre note est en dessous de la moyenne\n\n");
		}
	}
	else
		printf("votre note n'est pas comprise entre 0 et 20\n\n");
}

/*fonction qui recupere le nombre de note*/
void nombre_note(int* nb_note){
	scanf("%d", nb_note);
}

/*le main*/
int main(void){
	int *note = (int*) malloc(sizeof(int));
	int *nb_note = (int*) malloc(sizeof(int));
	printf("Saisissez le nombre de notes que vous voulez: ");
	nombre_note(nb_note);
	for (int i = 1; i <= *nb_note; ++i)
	{
		printf("note n°%d\n", i);
		printf("Saisissez votre note: ");
		saisie_note(note);
		affichage_note(note);
	}
	return EXIT_SUCCESS;
}