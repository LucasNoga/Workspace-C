#include <stdio.h>

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
        temp->next=nouvel_element;
        return liste;
    }
}
void afficher_liste(llist liste){
   llist affiche=liste;
    if (affiche!=NULL){
        element* affiche=liste->a //a ou vall//
        while(affiche!=NULL){
            Printf('%d ,affiche->val');
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
}

