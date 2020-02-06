#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element{
    int val;
    element next;
    };

typedef struct liste liste;
struct liste{
    element premier;
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
        temp->next=nouvel_element;
        return liste;
    }
}
void afficher_liste(llist liste){
    affiche=liste;
    if (affiche!=NULL){
        element* affiche=liste->a //a ou vall//
        while(affiche!=NULL){
            printf("%d ,affiche->val"');
            affiche=affiche->next;
                if (affiche==NULL){
                        printf(NULL);
                }
            }
        }

    }
}


int main(){
    void afficher_liste(llist liste);


