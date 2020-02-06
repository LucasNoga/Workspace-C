#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
void ordonnerTableau(int tableau[], int tailleTableau);

int main()
{
    printf("Hello world!\n");
    int tab[5] = {45,12,5,100,5};
    int tab2[5] = {0};
    printf("somme du tableau = %d\n", sommeTableau(tab, 5));
    printf("moyenne du tableau = %f\n", moyenneTableau(tab, 5));
    copie(tab, tab2, 5);
    maximumTableau(tab2, 5, 40);

    int tableau_desordonee[4] = {15,81,22,13};
    ordonnerTableau(tableau_desordonee,4);
    return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int resultat;
    for(int i = 0; i<tailleTableau; i++)
    {
        resultat+=tableau[i];
    }
    return resultat;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int total = 0;
    for(int i = 0; i<tailleTableau; i++)
    {
        total+=tableau[i];
    }
    return total/tailleTableau;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    for(int i = 0; i<tailleTableau; i++)
    {
        tableauCopie[i]+=tableauOriginal[i];
    }
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    for(int i = 0; i < tailleTableau; i++)
    {
        if(tableau[i] > valeurMax)
            tableau[i] = 0;
    }
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int temp = 0;
    int j = 1;
    for(int i = 0; i < tailleTableau; i++)
    {
        for(int j = 0; j < tailleTableau; j++)
        {
            // A finir
            temp = tableau[j];
            tableau[j] = tableau[i];
            tableau[i] = temp;
        }

    for(int i = 0; i < tailleTableau; i++)
    {
        printf("%d | ", tableau[i]);
    }
}
