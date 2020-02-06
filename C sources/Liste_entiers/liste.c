#include "liste_entiers.c"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//prototype
void sep();
liste liste_test1();
int longueurR(liste L);
int longueurI(liste L);
void afficher_liste(liste L);
void test_longueur();
void inserer_liste_D(unsigned int n, int x, liste L);
void test_inserer_liste_D_param(unsigned int n, int x, liste L);
void test_inserer_liste_D();
void test_inserer_liste_D_param(unsigned int n, int x, liste L);
void test_repeter_elements_param(liste L);
void test_repeter_elements_D();


int main(){
	 
	test_longueur();
	sep();
	test_inserer_liste_D();
	sep();
	test_repeter_elements();
	//sep();
	//test_repeter_elements_D();
	return 0;
	
}

//un séparateur
void sep(){
	printf("\n********************\n\n");
}

//une liste 1, 2, 3, 4
liste liste_test1(){
	return cons(1, cons(2, cons(3, cons(4, l_vide()))));
}

//recherche une valeur dans la liste
liste rechercherElement(liste L, int v){
   liste tmp = L;
    while(tmp != NULL)
    {
        if(tmp->premier == v)
        {
            return tmp;
        }
        tmp = tmp->suivant;
    }
    return NULL;
}

//le nombre d'oocurence d'une valeur dans une liste
int nombreOccurences(liste L, int v)
{
    int i = 0;
    if(L == NULL)
        return 0;
 
    while((L = rechercherElement(L, v)) != NULL)
    {
        L = L->suivant;
        i++;
    }
    return i;
}

//Longueur en recursif
int longueurR(liste L){
	liste tmp;
	if (tmp == NULL){
		tmp = L;
	}
	
	if (est_vide(L))
		return 0;
	
	else
		return 1 + longueurR(reste(L));
}

//Longueur en itératif	
int longueurI(liste L){
	liste tmp = L;
	int l = 0;
	while (tmp != NULL){
		l++;
		tmp = reste(tmp);
	}
	return l;
		
}

//affichage de la liste
void afficher_liste(liste L){
    liste tmp = L;
	while(tmp->suivant != NULL){
        printf("%d, ", prem(tmp));
        tmp = reste(tmp);
    }
	if (tmp->suivant == NULL)
		printf("%d", prem(tmp));	
}

//test la longueur recursif et itératif d'une liste
void test_longueur(){
	liste L ;
	L = liste_test1();
	printf("affichage de la liste\n");
	afficher_liste(L);
	printf("\nlongueur de la liste\n");
	printf("%d (R) = %d (I)\n", longueurR(L), longueurI(L));
}


void inserer_liste_D(unsigned int n, int x, liste L){
	unsigned int r = n; 
	liste D = malloc(sizeof(*D));
		
		if (L == NULL || D == NULL)
		{
				exit(EXIT_FAILURE);
				printf("depasser");
		}
	liste C = malloc(sizeof(*C));
	liste E = malloc(sizeof(*E));
	C = L;
	for (int i = 1; i < n; ++i){
		C = reste(C);
	}
	if (C->suivant == NULL)
		exit(EXIT_FAILURE);
		printf("depasser");
		
	ecrire_reste(E, L);
	E->suivant = C->suivant;
	C->premier = x;	
	L = reste(L);
	
}  

void test_inserer_liste_D_param(unsigned int n, int x, liste L){
	
	printf("\ninsertion de %i à la position %u dans la liste ",x ,n);
	afficher_liste(L);
	
	printf("\nResultat : ");
	inserer_liste_D(n, x, L);
	printf("\n");
}

//insere une liste deja defini
void test_inserer_liste_D(){
	unsigned int n;
	liste L = cons(1,cons(2, cons(3, cons(4, l_vide()))));
	for (n = 1; n <= 6; n++){
		test_inserer_liste_D_param(n, 10*n, L);
		afficher_liste(L);
		printf("\n");
	}
}

void test_repeter_elements_param(liste L){
	
	printf("repéter_elements(");
	afficher_liste(L);
	
	printf(") = ");
	//afficher_liste(repeter_elements(L));
	
	printf("\n");
}

void test_repeter_elements(){
	liste L = liste_test1();;
	//test_repeter_elements_param(L);
}

void test_repeter_elements_D(){
	liste L;
	L = cons(1,cons(2, cons(3, cons(4, l_vide()))));
	
	printf("Avant : L = ");
	afficher_liste(L);
	//repeter_elements_D(L);
	
	printf("\nAprès :L = ");
	afficher_liste(L);
	
	printf("\n");		
}

	
	
