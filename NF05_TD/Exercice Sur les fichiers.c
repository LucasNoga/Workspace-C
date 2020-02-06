#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct salle
{
    char* nom;
    int capacite;
};
typedef struct salle Salle;


/** @brief Cette fonction cree une liste de salles
* et demande a l'utilisateur les informations de chacune
* des salles
*/

struct salle* creerListeSalles(int nombreSalles)
{
    /// Creation de la liste avec le nombre d'elements passe en parametre
    Salle* ptrListeSalles = (Salle*) malloc(nombreSalles * sizeof(Salle));
    int i = 0;
    /// Parcours de la liste et lecture des donnees
    for(i = 0 ; i < nombreSalles; i++)
    {
        ptrListeSalles[i].nom = (char*) malloc (11*sizeof(char));
        printf("Donner le nom de la salle n° %d : ", i+1);
        gets(ptrListeSalles[i].nom);
        printf("Donner la capacite de la salle n° %d : ", i+1);
        scanf("%d", & ptrListeSalles[i].capacite);
        getchar();
    }
    /// Traitement termine, retourner la liste
    return ptrListeSalles;
}

/** @brief Cette fonction parcourt la liste des salles
* et affiche les informations de chacune de ces salles
*/
void afficherListeSalle(struct salle * ptrListeSalles, int tailleListeSalles)
{
    int i = 0;
    for(i = 0 ; i < tailleListeSalles; i++)
    {
        printf("Le nom de la salle n° %d = %s \n", i+1, ptrListeSalles[i].nom);
        printf("La capacite de la salle n° %d : %d\n", i+1, ptrListeSalles[i].capacite);
    }

}

/** @brief cette fonction ecrit la liste des salles dans un fichier, 
 * dont le chemin est passe en parametre
 * Le format d'ecriture est "nom, capacite\n" pour chaque salle dans la liste
 * La derniere ligne ne doit pas avoir un saut de ligne 
 */
void ecrireDansFichierListeSalles(char* nomFichier, Salle* ptrListeSalles, int tailleListeSalles)
{
    FILE* f = fopen(nomFichier, "w");
    int i;
    if(f != NULL)
    {
        for(i = 0 ; i < tailleListeSalles; i++)
        {
            /// eviter un saut de ligne au debut
            if(i == 0) fprintf(f, "%s %d", ptrListeSalles[i].nom, ptrListeSalles[i].capacite); 
            else fprintf(f, "\n%s %d", ptrListeSalles[i].nom, ptrListeSalles[i].capacite);
        }
        fclose(f);
        printf("Ecriture finie\n");
    }
    else
        printf("Votre fichier n'est pas cree\n");

}

void lectureFichierListeSalles(char* nomFichier, Salle** ptrListeSalles, int* tailleListeSalle)
{
    int indiceNom=0;
    char c;
    FILE* f = fopen(nomFichier, "r");
    *tailleListeSalle = 0;
    if(f != NULL)
    {
        *ptrListeSalles = (Salle*) malloc (*tailleListeSalle * sizeof(Salle));
        printf("fichier de lecture ouvert \n");
        do
        {
            char nomtmp[11];
            int capacite=0;
            indiceNom = 0;
            c = fgetc(f);
            while(c != ',' && c != '\n' && !feof(f))
            {
                nomtmp[indiceNom] = c;
                indiceNom++;
                c = fgetc(f);
            } 
            if(c!= '\n' && !feof(f)) // verifier que le format est bon et que le fichier n'est pas vide
            {
                nomtmp [indiceNom] = '\0';
                fgetc(f); /// lecture inutile de l'espace apres la virgule
                fscanf(f, "%d", & capacite);
                fgetc(f); /// lecture du saut de ligne
                
                /// ajout dans la liste des salles
                (*tailleListeSalle) ++;
                *ptrListeSalles = (Salle*) realloc(*ptrListeSalles, *tailleListeSalle * sizeof(Salle));
                (*ptrListeSalles) [*tailleListeSalle - 1].capacite = capacite;
                (*ptrListeSalles)[*tailleListeSalle - 1].nom = (char*) malloc (11*sizeof(char));
                strcpy((*ptrListeSalles) [*tailleListeSalle - 1].nom, nomtmp);
            }
        }while(!feof(f) && c != '\n');
        if(c == '\n')
            printf("Format de fichier incorrect, il n'y a pas de virgule entre le nom et la capacite\n");
        if(feof(f) && *tailleListeSalle == 0)
            printf("fichier vide!\n");
        fclose(f);
    }
    else
        printf("Fichier n'est pas ouvert ! lecture impossible\n");

}

int main()
{

    Salle* listeSalles = creerListeSalles(2);
    Salle *copieListeSalles;
    int tailleCopieListeSalles = 0;
    afficherListeSalle(listeSalles, 2);
    ecrireDansFichierListeSalles("listeSalles.txt", listeSalles, 2);
    lectureFichierListeSalles("listeSalles.txt", &copieListeSalles, &tailleCopieListeSalles);
    afficherListeSalle(copieListeSalles, tailleCopieListeSalles);
    return 0;
}