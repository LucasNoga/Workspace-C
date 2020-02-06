#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int nbchaine = 0, i = 0, j = 0, k = 0;
  char ** x = NULL, y[50]; 
  printf("Combien de chaine avez-vous? ");
  scanf("%d", &nbchaine);

  x = (char*) malloc (nbchaine * sizeof(char)); 
  for(i = 0; i <= nbchaine; ++i) 
  {
     x[i] = (char*) malloc (50 * sizeof(char));
     printf("Entrer votre chaine %d : ", i); 
     gets(&x[i]); 
  }
  
  for(i = 0; i <= nbchaine; ++i) 
  {
    k = i; 
    for(j = i+1; j <= nbchaine; ++j) 
      if(strcmp(x[j], x[i]) < 0) k = i+j+1; 
    strcpy(y, x[i]); strcpy(x[i], x[k]); strcpy(x[k], y);
  }
  for(i = 0; i <= nbchaine; ++i)
    printf("%s\n", x[i]); 
}