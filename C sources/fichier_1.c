#include <stdio.h>
#include <stdlib.h>
#include <fctnl.h>

void afficher_ligne(char *nom, int ligne){
	printf("Fichier %s |ligne %d\n", nom, ligne);
	int fd = open(nom, O_RDONLY);
	if(fd == -1){
        exit(1);
    }
    char c;
    int i=1;
    while(read(fd, &c, 1)){
        if(i==ligne)
            printf("%c", c);
        if(c=='\n')
            i++;
    }
    close(fd);
}

int main(int argc, char *argv[]){
    afficher_ligne(argv[1], atoi(argv[2]));
    return EXIT_SUCCESS;
}