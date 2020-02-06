#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Liste *liste;

/*Liste*/
struct Liste{
  	int premier;
  	liste suivant;
};

/*Prototype*/
liste l_vide();
liste cons(int x, liste L);
bool est_vide(liste l);
int prem(liste L);
liste reste(liste L);

void liberer_liste(liste L);
void ecrire_prem(int x, liste L);
void ecrire_reste(liste R, liste L);

/*Constructeur*/
liste l_vide(){
  	return NULL;
}

liste cons(int x, liste L){
  	liste M;
 	 //reservation de la memoire 
 	 M = malloc(sizeof(*M));
 	 M->premier = x;
 	 M->suivant = L;
  	return M;
}


bool est_vide(liste L){
  	return L == NULL;
}

int prem(liste L){
  	if (est_vide(L)){
     	printf("Calcul de prem sur liste vide\n");
     	exit(0);
  	}
  	return L->premier;
}

liste reste(liste L){
	return L->suivant;
}

void liberer_liste(liste L){
	if(est_vide(L))
	{
		return ;
	}
	liberer_liste(reste(L));
	free(L);
}

void ecrire_prem(int x, liste L){
  	L->premier = x;
}

void ecrire_reste(liste L, liste R){
 	L->suivant = R;
}



