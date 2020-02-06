/*Ecrire un programme qui permet de convertir un nombre de la base binaire à la base décimale."
"Réaliser un autre programme qui effectue l’operation inverse.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void binary_to_decimal(char *binaire);
void decimal_to_binary(char *decimal);
bool check_binaire(char *string);
bool check_decimal(char *string);

int main(void){
    int *choix = malloc(sizeof(int));
    char *binaire = malloc(100*sizeof(char));
    char *decimal = malloc(100*sizeof(char));
    puts("1 : binaire -> decimale\n2 : decimale -> binaire\nVotre choix :");
    scanf("%d", choix);
    switch(*choix){
        case 1:
            scanf("Saisisser votre nombre binaire : %s", binaire);
            if(check_binaire(binaire))
                binary_to_decimal(binaire);
            break;

        case 2:
            scanf("Saisisser votre nombre décimale : %s", decimal);
            if(check_decimal(decimal))
                decimal_to_binary(decimal);
            break;

        default:
            printf("commande non valide");
            exit(1);
    }
    return EXIT_SUCCESS;
}

/*convertit un nombre binaire en decimal*/
void binary_to_decimal(char *bin){
    puts("salut");
    printf("%d", *bin);
    //  char *decimal;
    //scanf("saisissez un nombre decimal : %c", decimal);
    //check_decimal(*decimal);
}

/**convertit un nombre décimal en binaire*/
void decimal_to_binary(char *dec){
    printf("%d", *dec);
    //scanf("saisissez un nombre binaire : %c", binaire);
    //check_binaire(*binaire);
    //printf("%c", *binaire);
    //printf("%c", binaire[0]);
    //- on refait un scanf pour un binaire en chaine de caractere on le split dans un tableau
    //- on creer une fonction verification binaire qui verifie si le nombre saisi est un bon nombre binaire
}

bool check_binaire(char *binaire){
    return false;
    //"- il faut decouper la chaine de caracterer ensuit convertir en int et
    // que ca vaut soit 0 soit 1 sinon c'est faux";
}

bool check_decimale(char *binaire){
    return false;
}