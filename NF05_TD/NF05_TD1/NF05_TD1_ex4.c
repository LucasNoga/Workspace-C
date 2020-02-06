//
// Created by lucas noga on 14/04/2017.
//

#include <stdio.h>
#include <stdlib.h>

//1)
void calcul(int a, int b){
    printf("somme = %d\ndifference = %d\nproduit = %d\nQuotient = %d\nreste = %d\n", a+b, a-b, a*b, a/b, a%b);
}

//2)
void permutter_reel(double a, double b){
    double c = 0;
    printf("les valeurs sont a = %f et b = %f\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("les valeurs sont a = %f et b = %f\n", a, b);
}


void permutter_caractere(char a, char b){
    char c = '/';
    printf("les valeurs sont a = %c et b = %c\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("les valeurs sont a = %c et b = %c\n", a, b);
}


//3)
void somme_caractere(char a, char b){
    int c = a+b;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}

void difference_caractere(char a, char b){
    int c = a-b;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}


//4)
void miximax(int a, int b){
    int max, min = 0;
    if(a<b) {
        max = b;
        min = a;
    }
    else{
        max = a;
        min = b;
    }
    printf("le max est %d et le min est %d\n", max, min);
}

int main () {
    calcul(2, 5);
    printf("-------------\n");
    permutter_reel(2, 5);
    permutter_caractere('z', 'a');
    printf("-------------\n");
    somme_caractere('a', 'b');
    difference_caractere('a', 'b');
    printf("-------------\n");
    miximax(95, 108);
    miximax(1000, 1);

}