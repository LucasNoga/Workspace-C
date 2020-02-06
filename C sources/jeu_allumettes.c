#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define NB_LIGNES 4



void sep();
void creer_tableau();
void afficher_tableau();
void afficher_etat();
void generer_etat();
int est_un_etat_final();
int est_applicable();
void appliquer();
int choix_aleatoire_ligne();
int choix_aleatoire_nb_allum();
void simulation_partie();  //a faire //utiliser le scanf avec la fonction appliquer
void jouer_partie(); // a faire

int main(){
	int tab[NB_LIGNES] = {2, 3, 4, 5};
	int tab2[NB_LIGNES] = {0, 0, 1, 0};
	int tab3[NB_LIGNES];
    
    creer_tableau(tab3);
	printf("\n");
	afficher_tableau(tab3);
	printf("\n");
	afficher_etat(tab3);

	
	printf("\n\n\n");
	printf("tab[] = {2, 3, 4, 5}\n");
	printf("affichage du tableau numérique\n");
	afficher_tableau(tab);
	
	sep();
	
	printf("affichage de l'état\n");
	afficher_etat(tab);
	
	sep();
	
	printf("générer aléatoirement un état\n");
	generer_etat(tab3, 7);
	
	sep();

	printf("\nfaire une action sur tab enleve 2 allumettes de la 3eme ligne\n");
	appliquer(tab, 2, 2);

	sep();

	printf("\nchoix aléatoire d'une ligne\n");
	choix_aleatoire_ligne(tab);

	sep();
	return 0;
	
}

//un séparateur
void sep(){
	printf("\n\n********************\n\n");
} 


//Doit PERMETTRE de creer un tableau même si on change la constante nb_lignes
//void definir_taille_tableau(int tab){
//	int tab[NB_LIGNES];
//	
//	for (int i = 0; i < NB_LIGNES; i++) {
//		tab[i] = 0;
//	}
//}

//affiche les valeurs numériques

void creer_tableau(int *tab)
{
    int i;
    for(i=0; i<NB_LIGNES; i++)
    {
       tab[i] = 0;
    }
}

void afficher_tableau(int tableau[]){
	printf("[ ");
	for (int i = 0; i < NB_LIGNES-1; i++){
		printf("%d, ", tableau[i]);
	}
	printf("%d ]", tableau[NB_LIGNES-1]);
}



//affiche les allumettes
void afficher_etat(int etat[]){
	int j = 0;
	int i = 0;
	printf("______________\n");
	while (i < NB_LIGNES){
			while ( j < etat[i]){
				printf(" | ");
				j++;
			}  
			printf( "\n" );
			j = 0;         
			i++;
	}
	printf("______________\n");
}

//genere aleatoirement un etat
void generer_etat(int tab[], int n){
	srand(time(NULL));
	if (n <= 0)
		printf("ERREUR");
	else{
		for(int i ; i < n; i++){
			int nbrand = rand() % NB_LIGNES;
			tab[nbrand] += 1;
		}

		printf("affichage numerique\n");
		afficher_tableau(tab);
		printf("\naffichage etat\n");
		afficher_etat(tab);
	}
}

int est_un_etat_final(int etat[]){
	int compteur = 0;
	for(int i = 0; i < NB_LIGNES; i++)
		compteur += etat[i]; 
	
	if (compteur <= 1)
		return 1;
	else
		return 0;

}

int est_applicable(int etat[], int ligne, int nb_allum){
	if(etat[ligne] >= nb_allum)
		if (nb_allum == 0)
			return 0;
		else 
			return 1;	
	else
		return 0;

}
void appliquer(int etat[], int ligne, int nb_allum){
	if (est_applicable(etat, ligne, nb_allum))
		etat[ligne]-=nb_allum;
	else
		printf("ERREUR");

	printf("affichage numerique\n");
	afficher_tableau(etat);
	printf("\naffichage etat\n");
	afficher_etat(etat);

}

int choix_aleatoire_ligne(int etat[]){
	srand(time(NULL));
	int ligne_random = 0;
	while(etat[ligne_random] == 0){
		printf("rechercher d'une autre ligne\n");
		ligne_random = rand() % NB_LIGNES;
		printf("la ligne est %d\n", ligne_random);
		printf(" il y a %d allumettes\n", etat[ligne_random]);
	}
	printf("une bonne ligne est donc %d\n", ligne_random);
	printf("a la ligne %d il y a %d allumettes.", ligne_random, etat[ligne_random]);
	return ligne_random;
}

//int choix_aleatoire_nb_allum(int etat[]){
//	srand(time(NULL));
//	int nb_random = rand() % 10;
//	etat[i] = etat[choix_aleatoire_ligne();
//		printf("la ligne est %d\n", ligne_random);
//		printf(" il y a %d allumettes\n", etat[ligne_random]);
//	}
//	printf("la bonne ligne est donc %d\n", ligne_random);
//	printf(" il y a %d allumettes", etat[ligne_random]);
//	return ligne_random;
//}