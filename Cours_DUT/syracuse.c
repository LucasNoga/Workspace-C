// La suite de Syracuse d'un entier N est definie par recuence de la maniere suivante
//u0 = N
//un+1 = un/2 si un est pair
//un+1 = 3un +1 si un impair
//jusqu'a ce que un = 1

#include <stdio.h>

/*
retourne l'element suivant de la liste de syracuse
*/
int syracuse_next(int n){
    if(n % 2 == 0){
        return n/2;
    }

    else{
        return 3*n+1;
    }
}

/*
calcule le nombre de fois que la suite est appele jusqu'a ce qu'on est 1
*/
int syracuse_suite(int n){
    int cpt = 0;
    //int res = 0;
    while(n != 1){
        n = syracuse_next(n);
        cpt++;
    }
    return cpt;
}


/*
3) int SyracuseMax(int n) qui renvoi la valeur max de Un dans la suite
*/
int syracuse_max(int n){
    int max = n;
    //printf("----------------- %d --------------------\n", n);
    while(n != 1){
        //printf("avec n %d, le max est : %d\n", n, max);
        max = (syracuse_next(n) > max) ? syracuse_next(n) : max;
        n = syracuse_next(n);

    }

    return max;
}






