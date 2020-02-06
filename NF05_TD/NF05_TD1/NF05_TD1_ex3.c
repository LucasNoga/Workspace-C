//
// Created by lucas noga on 14/04/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("%s est de %lu octets\n", "la taille d'un int", sizeof(int));
    printf("%s est de %lu octets\n", "la taille d'un short", sizeof(short));
    printf("%s est de %lu octets\n", "la taille d'un char", sizeof(char));
    printf("%s est de %lu octets\n", "la taille d'un float", sizeof(float));
    printf("%s est de %lu octets\n", "la taille d'un double", sizeof(double));
}