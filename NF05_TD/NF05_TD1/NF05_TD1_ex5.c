//
// Created by lucas noga on 14/04/2017.
//

#include <stdio.h>
#include <stdlib.h>

double aire_triangle(double base, double hauteur){
    return 0.5*base*hauteur;
}

int main () {
    double B = 3;
    double H = 12;
    double A = aire_triangle(B, H);
    printf("l'aire est de %f\n", A);

    double nouvelle_aire = aire_triangle(7, 9);
    printf("l'aire est de %f", nouvelle_aire);
    return EXIT_SUCCESS;
}