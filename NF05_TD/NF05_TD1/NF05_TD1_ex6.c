//
// Created by lucas noga on 15/04/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double volume_cone(double rayon, double hauteur){
    return 3,14*rayon*rayon*hauteur/3;
}

int main () {
    double rayon = 3;
    double hauteur = 12;
    double volume = volume_cone(rayon, hauteur);

    printf("le volume est de %f\n", volume);

    double nouveau_volume = volume_cone(5, 10);
    printf("le volume est de %f\n", nouveau_volume);
    return EXIT_SUCCESS;
}