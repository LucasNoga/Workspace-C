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

/*fonction faisant x puissance y*/
void puissance(int *x, int *y){
	int res = *x;
	for (int i = 1; i < *y; ++i)
	{
		res*=*x;
	}
	printf("resultat %d\n", res);
}

/*le main*/
int main(void)
{
	int *x = (int*) calloc(1, sizeof(int));
	int *y = (int*) calloc(1, sizeof(int));
	scanf("%d", x);
	scanf("%d", y);
	puissance(x, y);
	
	/*liberation des allocations*/
	free(x);
	free(y);
	
	return EXIT_SUCCESS;
}