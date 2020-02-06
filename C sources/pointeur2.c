#include <stdio.h>
#include <stdlib.h>

void maFonction(int *pointeur);

int main(void)
{
    int maVariable = 10;
    
    /* Avant l'appel de la fonction maVariable vaut 10 */
    printf("Valeur de maVariable avant l'appel de fonction : %d\n", maVariable);

    /* On envoie l'adresse de maVariable à maFonction */
    maFonction(&maVariable);

    /* La valeur de maVariable a été modifiée elle vaut maintenant 5 ! */
    printf("Valeur de maVariable apres l'appel de fonction : %d", maVariable);


    return 0;
}

void maFonction(int *pointeur)
{
    /* Ce pointeur va directement modifier la valeur de maVariable pour la mettre à 5 */
    *pointeur = 5;
}
