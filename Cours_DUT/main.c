#include <stdio.h>
#include <stdlib.h>
#include "syracuse.h"

int main()
{
    int n = 54;
    int n2 = 17;
    printf("la suite next syracuse de %d est %d\n", n, syracuse_next(n));
    printf("la suite next syracuse de %d est %d\n", n2, syracuse_next(n2));

    printf("la nombre de fois ou syracuse est appele pour %d est %d\n", n, syracuse_suite(n));
    printf("la nombre de fois ou syracuse est appele pour %d est %d\n", n2, syracuse_suite(n2));

    printf("le maximum atteint avec syracuse pour %d est %d\n", n, syracuse_max(n));
    printf("le maximum atteint avec syracuse pour %d est %d\n", n2, syracuse_max(n2));

    return 0;
}




