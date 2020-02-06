//
// Created by lucas noga on 29/04/2017.
//

#include <stdio.h>

struct voiture{
    int imatriculation[20];
    char marque[20];
    int dpmc[10];
    int drag[10];
};

struct voiture list_voitures[4];
int main(void) {
    for (int i = 0; i < 4; i++){
        printf("\nEntrez votre numéro de immatriculation: ");
        scanf("%20d", list_voitures[i].imatriculation);
        printf("\nEntrez la marque de votre voiture : ");
        scanf("%20s", list_voitures[i].marque);
        printf("\nEntrez la date de première mise en circulation : ");
        scanf("%10d", list_voitures[i].dpmc);
        printf("\nEntrez la date de rentrée au garage : ");
        scanf("%10d", list_voitures[i].drag);
    }

    printf("\n\n");

    for (int i=0; i < 4; i++){
        printf("Nom : %d %s", list_voitures[i].imatriculation, list_voitures[i].marque);
        printf("\t\tdpmc: %d\n", list_voitures[i].dpmc);
        printf("\t\tdrag: %d\n", list_voitures[i].drag);
    }

    return 0;
}