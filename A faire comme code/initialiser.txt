#include <stdlib.h>

typedef struct element element
typedef element* llist
struct element{
    int val;
    llist next;
};
llist ajouter_en_tete(llist liste, int v){
    element* a;
    a=(element)malloc(sizeof(struct element));
    a->val=v;
    a->next=liste;
        return a;
element* llist and element* a;
    }
llist ajouter_en_fin(llist liste, int v){
    llist nouvel_element=malloc(sizeof(struct element));
    nouvel_element->val=v>
    nouvel_element->next=NULL
    if(liste==NULL){
        return nouvel_element;
    }
    else{
        list temp=liste;
        while(temp->next!NULL){
            temp->temp->next;
        }

initialiserla liste
Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
