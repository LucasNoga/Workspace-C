#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*fonction qui recupere le nombre de note*/
void nombre_note(int* nb_note)
{
	scanf("%d", nb_note);
}

/*Fonction pour saisir la note*/
void saisie_note(int * note)
{
	/*donne une adresse et on specifie que c'est un entier sinon il prend ca comme un caractere*/
	scanf("%d", note);
}

/*Fonction pour afficher la note*/
void affichage_note(int *note)
{
	/*Test si la note est comprise entre 0 et 20*/
	if(*note > 0 && *note < 20 )
	{
		printf("votre note est %d\n", *note);
		/*Test si la note est inferieur à 10*/
		if(*note < 10)
		{
			printf("votre note est en dessous de la moyenne\n\n");
		}
	}
	else
		printf("votre note n'est pas comprise entre 0 et 20\n\n");
}

/*Fonction qui calcule la moyenne*/
void calcul_moyenne(int *tab, int *taille_tab, double *moyenne)
{
	printf("tableau des notes:\n");
	/*parcours du tableau des notes*/
	for (int i = 0; i <= *taille_tab; ++i)
	{
		*moyenne= *moyenne + tab[i];
		printf("%lf  ", *moyenne);
	}
	*moyenne = *moyenne / *taille_tab;
} 

/*le main*/
int main(void)
{
	int *note = (int*) malloc(sizeof(int));
	int *nb_note = (int*) malloc(sizeof(int));
	double *moyenne = (double*) calloc(1, sizeof(double));
	int index = 0;

	printf("Saisissez le nombre de notes que vous voulez: ");
	nombre_note(nb_note);

	int *taille_tab = (int*) malloc(sizeof(int));
	*taille_tab = *nb_note-1;
	/*allocation memoire d'un tableau qui a pour taille le nombre de notes*/
	int *tab = (int*) malloc(*taille_tab*sizeof(int));

	for (int i = 1; i <= *nb_note; ++i)
	{
		printf("note n°%d\n", i);
		printf("Saisissez votre note: ");
		saisie_note(note);
		affichage_note(note);
		tab[index++] = *note;
	}
	calcul_moyenne(tab, nb_note, moyenne);
	printf("la moyenne est %f\n", *moyenne);
	
	/*liberation des allocations*/
	free(tab);
	free(moyenne);
	free(note);
	free(nb_note);
	free(taille_tab);
	
	return EXIT_SUCCESS;
}