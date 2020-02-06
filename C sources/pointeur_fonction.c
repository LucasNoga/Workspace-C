#include <stdio.h>

void f1() {
    printf("Affichage de f1.\n");
}

void f2() {
    printf("Affichage de f2.\n");
}

int main() {
    void (*f) ();
    f = f1;
    f();
    f = f2;
    f();
    return 0;
}