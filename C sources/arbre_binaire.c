#include <stdio.h>
#include <stdlib.h>

typedef struct element Element;
struct element{
    int val;
    Element next;
};

typedef struct liste Liste;
struct liste{
    Element premier;
};

Liste ajouter_en_tete(Liste liste, int v){
    element* a;
    a=(element)malloc(sizeof(struct element));
    a->val=v;
    a->next=liste;
        return a;
}

Liste ajouter_en_fin(Liste liste, int v){
    llist nouvel_element=malloc(sizeof(Element));
    nouvel_element->val=v>
    nouvel_element->next=NULL;
    if(liste==NULL){
        return nouvel_element;
    }
    else{
        Liste temp = liste;
        while(temp->next!NULL){
            temp->temp->next;
        }
        temp->next=nouvel_element;
        return liste;
    }
}
void afficher_liste(Liste liste){
    Liste affiche = liste;
    if (affiche!=NULL){
        Element *affiche=liste->a;
        while(affiche!=NULL){
            printf("%d ,affiche->val"');
            affiche=affiche->next;
            if (affiche==NULL){
                    printf(NULL);
            }
        }
    }
}


int main() {
    void afficher_liste(Liste liste);
}


