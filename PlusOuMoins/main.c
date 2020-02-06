#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main ( int argc, char** argv )
{
    int continuerPartie = 1;
    int nombreMystere = 0, nombreEntre = 0;
    int compteur = 0;
    int MAX = 100, MIN = 1;
    int level = 0;
    while(continuerPartie){
        compteur = 0;
        //Menu
        printf("Choissisez un niveau de difficulte\n\t- 1: Facile\n\t- 2: Moyen\n\t- 3: Hard\nVotre choix(1,2,3): ");
        scanf("%d", &level);
        switch(level){
        case 1:
            printf("Niveau facile\n");
            MAX = 100;
            break;
        case 2:
            printf("Niveau moyen\n");
            MAX = 1000;
            break;
        case 3:
            printf("Niveau difficile\n");
            MAX = 10000;
            break;
        default:
            printf("Niveau moyen\n");
            MAX = 100;
            break;
        }
        // Génération du nombre aléatoire
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
        do
        {
            // On demande le nombre
            printf("Quel est le nombre ? ");
            scanf("%d", &nombreEntre);
            compteur++;
            // On compare le nombre entré avec le nombre mystère

            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n", compteur);
        } while (nombreEntre != nombreMystere);

        printf("\nVoulez-vous refaire une partie (Y/N): ");
        char rep;
        scanf(" %c", &rep);
        if(rep!='Y')
        {
            continuerPartie = 0;
        }
        else
        {
            printf("\nNouvelle partie\n");
        }
    }
    printf("Partie termine");
    Sleep(1000);
    return 0;
}


